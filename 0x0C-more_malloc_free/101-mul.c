#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - multiplies two postive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, or 1 if not
 */
int main(int argc, char *argv[])
{
	char *ptr1 = NULL;
	char *ptr2 = NULL;
	int len1, len2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	strcpy(ptr1, argv[1]);
	strcpy(ptr2, argv[2]);
	while (ptr1[len1])
	{
		if (isdigit(ptr1[len1]) == 0)
		{
			printf("Error\n");
			exit(98);
		}
		len1++;
	}
	while (ptr2[len2])
	{
		if (isdigit(ptr2[len2]) == 0)
		{
			printf("Error\n");
			exit(98);
		}
		len2++;
	}
	printf("%d\n", (atoi(ptr1) * atoi(ptr2)));
	return (0);
}
