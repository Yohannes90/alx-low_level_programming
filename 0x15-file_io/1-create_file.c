#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure(if file couldn't be
 * created or written on)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, length);
	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	close(fd);

	return (1);
}
