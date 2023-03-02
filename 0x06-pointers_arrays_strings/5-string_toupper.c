#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: pointer to string
 *
 * Return: str in uppercase
 */
char *string_toupper(char *str)
{
	int i, length;

	i = 0;
	length = 0;
	while (str[i++])
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
