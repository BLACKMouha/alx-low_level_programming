#include "main.h"

/**
 * create_file - creates a file
 * Prototype:
 * int create_file(const char *filename, char *text_content);
 * @filename: name of the file to create
 * @text_content: a NULL termninated string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len_tc;
	ssize_t written;

	/** If @filename is NULL */
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = creat(filename, 0600);
		if (fd == -1)
			return (-1);
		else
			return (1);
		close(fd);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND | O_TRUNC,
	0600);
	if (fd == -1)
		return (-1);

	len_tc = strlen(text_content);
	written = write(fd, text_content, len_tc);
	close(fd);
	if (written == -1)
		return (-1);
	else
		return (1);
}
