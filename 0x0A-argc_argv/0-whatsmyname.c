#include <stdio.h>

/**
 * main - print programs own name 
 * @argc: argument count
 * @ardv: argument vector(pointer to set of arguments)
 *
 * Return: Always 0.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return 0;
}
