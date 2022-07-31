#include "main.h"

/**
 * main - a program that copies the content of a file to another file
 * Usage: cp file_from file_to;
 * Prototype: int main(int ac, char **av);
 * @ac: number of arguments passed to the program, it should be 3
 * exacty;
 * @av: array containing all arguments in a string form
 *
 * Return: EXIT_SUCCESS
 */
int main(int ac, char **av)
{
	int fd_file_from, fd_file_to, close_fd;
	char buffer[1024];
	ssize_t read_chars, written;

	if (ac != 3 || av == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_file_from = open(av[1], O_RDONLY);
	fd_file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", av[2]);
		exit(99);
	}

	read_chars = read(fd_file_from, buffer, 1024);
	if (read_chars == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		av[1]);
		exit((98);
	}
	written = write(fd_file_to, buffer, read_chars);
	if (written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n",
		av[2]);
		exit(99);
	}
	safe_close(fd_file_from);
	safe_close(fd_file_to);
	return (EXIT_SUCCESS);
}

/**
 * safe_close - check if a file descriptor is closable
 * Prototype: void safe_close(int fd);
 * @fd: file descrption
 * Return: Nothing
 */
void safe_close(int fd)
{
	if (close(f_n) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_n);
		exit(100);
	}
}
