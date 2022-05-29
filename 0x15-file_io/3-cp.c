/** ===== Header Files ===== **/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/** ===== Prototype ===== **/
int safe_close(int fd);


/**
 * main - copies the content of a file to another one.
 * Usage on a terminal / shell: ./cp file_from file_to
 *
 * If @file_to already exists, truncate it.
 *
 * If the number of argument is not the correct one, exit with code 97 and print
 * "Usage: cp file_from file_to", followed by a new line, on the POSIX standard
 * error STDERR_FILENO.
 *
 * If @file_from does not exist, or if you can not read it, exit with code 98 and
 * print "Error: Can't read from file NAME_OF_THE_FILE", followed by a new line, on
 * the POSIX standard error STDERR_FILENO,
 * where NAME_OF_FILE is the first argument passed to your program.
 *
 * If you can not create por if write() to @file_to fails, exit with code 99 and
 * print "Error: Can't write to NAME_OF_THE_FILE", followed by a new line, on the 
 * POSIX standard  error, STDERR_FILENO
 * where NAME_OF_THE_FILE is the second argument passed to your program.
 *
 * If you can not close a file descriptor, exit with code 100 and print
 * "Error:Can't close fd FD_VALUE", followed by a new line, on the POSIX
 * standard error, STDERR_FILENO,
 * where FD_VALUE is the value of the file descriptor
 *
 *
 */

int main (int argc, char **argv)
{
	int fd_of_file_from, fd_of_file_to, bufsize = 1024, bytes_read, bytes_written, is_closed;
	int i, len_arg_1, len_arg_2;
	char buffer[1024];
	char file_from[1024];
	char file_to[1024];

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from, file_to\n");
		exit(97);
	}

	/** The first argument passed to the function is file_from */
	len_arg_1 = strlen(argv[1]);

	for (i = 0; i < len_arg_1; i++)
		file_from[i] = *(argv[1] + i);

	file_from[i] = '\0';

	/** The second argument passed to the function is file_to */
	len_arg_2 = strlen(argv[2]);

	for (i = 0; i < len_arg_2; i++)
		file_to[i] = *(argv[2] + i);

	file_to[i] ='\0';
	
	/** Trying to open file_from & file_to **/
	/** file_from is read **/
	fd_of_file_from = open(file_from, O_RDONLY);

	if (fd_of_file_from < 0)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	/** While file_to is written **/
	fd_of_file_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
 
	if (fd_of_file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		safe_close(fd_of_file_to);
		exit(99);
	}

	/** Now, file_from & file_to are opened successfullty **/
	bytes_read = read(fd_of_file_from, buffer, bufsize);

	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		safe_close(fd_of_file_from);
		safe_close(fd_of_file_to);
		exit(98);
	}

	bytes_written = write(fd_of_file_to, buffer, bytes_read);

	if (bytes_written < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		safe_close(fd_of_file_from);
		safe_close(fd_of_file_to);
		exit(98);
	}

	is_closed = safe_close(fd_of_file_from);

	if(is_closed < 0)
		exit(100);

	is_closed = safe_close(fd_of_file_to);
		exit(100);

	return (0);
}


/**
 * safe_close - close a file descriptor safely.
 * Return: 0 on success, -1 on failure and print an message to the POSIX standard error.
 */

int safe_close(int fd)
{
	int close_integer;

	close_integer = close(fd);

	if (close_integer < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	}

	return (close_integer);
}




































































