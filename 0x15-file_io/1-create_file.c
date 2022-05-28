#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/** 
 * create_file - a function that creates a file.
 * Prototype: int create_file(const char *filename, char *text_content);
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to @filename
 * Return: 1 on success, -1 on failure
 */

/**
 * Write a function that creates a file.
 * Prototype: int create_file(const char *filename, char *text_content);
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to @filename.
 * Return: 1 on success, -1 on failure (file can not be created, file can not be written,
 * write() fails, etc...)
 * The created file must have those permissions: rw-------.
 * If the file already exists, truuncate it.
 * If @filename is NULL return -1.
 * If text_content is NULL create an empty file.
 */


int create_file(const char *filename, char *text_content)
{
	int fd_open, fd_write, length_of_text_content;

	if (filename == NULL)
		return (-1);

	fd_open = open (filename, O_RDWR | O_CREAT | O-TRUNC, 0600);
	length_of_text_content = strlen(text_content);
	
	if (fd_open <= -1)
		return (-1);

	fd_write = write(fd_open, text_content, length_of_text_content);
	
	close(fd_open);

	if (fd_write <= -1)
		return (-1);

	return (1);
}



































