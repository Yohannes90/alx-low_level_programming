#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - reads a textfile and prints it to the POSIX standard output
 * @filename: name of file to be read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t fd, numbyte, t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	ptr = malloc(sizeof(char) * letters);
	t = read(fd, ptr, letters);
	numbyte = write(STDOUT_FILENO, ptr, t);
	free(ptr);
	close(fd);

	return (numbyte);
}
