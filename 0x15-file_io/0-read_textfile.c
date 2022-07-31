#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 *
 * Prototype: ssize_t read_textfile(const *filename, size_t letters);
 * @filename: a string representing the name of a filename
 * @letters: the number of letters it should read and print
 *
 * Return:
 * - the number of letters it could read and print;
 * - If the file can not be opened or read, return 0;
 * - If @filename == NULL, return 0;
 * - If write() fails or does not write the expected amount of bytes,
 *   return 0.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_chars, written;
	char *buffer = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if ((filename == NULL) || (fd == -1) || (buffer == NULL))
	{
		free(buffer);
		return (0);
	}
	read_chars = read(fd, buffer, letters);
	if (read_chars == -1)
		return (0);
	buffer[read_chars] = '\0';
	written = write(STDOUT_FILENO, buffer, read_chars);
	if (written == -1)
		return (0);
	close(fd);
	return (written);
}
