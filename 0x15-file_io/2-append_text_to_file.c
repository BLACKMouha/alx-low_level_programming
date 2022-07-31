#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * Prototype:
 * int append_text_to_file(const char *filename, char *text_content);
 * @filename: the name of the file
 * @text_content: string to add at the end of @filename
 *
 * Return: 1 on success, or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t lenght_text_content;
	ssize_t written;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL || fd == -1)
		return (-1);

	if (text_content == NULL)
		close(fd);

	lenght_text_content = strlen(text_content);
	written = write(fd, text_content, lenght_text_content);
	close(fd);
	if (written == -1)
		return (-1);
	return (1);
}























































































