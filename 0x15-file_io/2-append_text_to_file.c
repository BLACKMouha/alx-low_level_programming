#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * Protorype: int append_text_to_file(const  char *filename, char *text_content);
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure.
 */
/*
 * If filename is NULL return -1.
 * If text_content is NULL, do not add anything to the file. Return 1 if the file extsts
 * and -1 if the file does not extst or you do not have the required permission to write
 * the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, fd_write, length;

	if (filename == NULL)
		return (-1);

	fd_open = open(filename, O_RDWR | O_APPEND);

	if (fd_open < 0)
		return (-1);

	if (text_content == NULL)
		close(fd_open);

	length = strlen(text_content);

	fd_write = write(fd_open, text_content, length);

	if (fd_write < 0)
		return (-1);

	close(fd_open);

	return (1);
}


































































































