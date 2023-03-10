#include <stdio.h>

/**
 * main - prints all arguments it recives
 * @argc: argument count
 * @argv: argument vector(all going to be printed)
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
