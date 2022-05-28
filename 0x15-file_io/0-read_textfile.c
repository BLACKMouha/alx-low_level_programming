#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <stddef.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output STDOUT.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print
 * If the file cannot be opened or read, return 0;
 * If @filename is NULL return 0;
 * If write() fails or does not write the expected amount of bytes,
 * return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/**
	 * @fd_open is a file descriptor returned when we call open();
	 * @read_characters is the number of characters returned by read();
	 * @written_characters is the number of characters written.
	 */
	int fd_open, read_characters, written_characters;
	char *characters_to_be_read_and_printed;
	if (filename == NULL)
		return (0);

	/* if filename is not NULL */
	characters_to_be_read_and_printed = malloc(sizeof(char) * letters);

	if (characters_to_be_read_and_printed == NULL)
		return (0);

	/* if characters_to_be_read_and_printed is not NULL */
	fd_open = open(filename, O_RDONLY);

	if (fd_open <= -1)
	{
		free(characters_to_be_read_and_printed);
		return (0);
	}

	/* if fd_open reprensents success, so the filename is open ==> */

	/**
	 * It's time to call read() : read() reads up a number of characters @letters
	 * from file descriptor @fd_open into the buffer
	 * @characters_to_be_read_and_printed.
	 * Then, read() returns the numbers of characters read, @read_characters.
	 */
	read_characters = read(fd_open, characters_to_be_read_and_printed, letters);

	if (read_characters <= -1)
	{
		free(characters_to_be_read_and_printed);
		return (0);
	}

	/* if read_characters > 0, it means there are read characters from filename => */

	/**
	 * It's time to call write() : write() writes a number of characters
	 * @read_characters in a file descriptor which is in
	 * this case  STDOUT_FILENO (the standard output), from the buffer starting at
	 * characters_to_be_read_and_printed
	 * write() returns normally the number of bytes written which is
	 * @written_characters.
	 */
	written_characters = write(STDOUT_FILENO, characters_to_be_read_and_printed, read_characters);

	return (written_characters);
}
