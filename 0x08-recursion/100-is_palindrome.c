#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 *
 * Return: 1 if palindrome, or 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return(check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - counts the length of a string
 * @s: pointer to string to have length count
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}

/**
 * check_palindrome - checks string if palindrome recursively
 * @s: string to be checked
 * @i: iteration
 * @length: length of the string
 *
 * Return: 1 if palindrome, or 0 if not
 */
int check_palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
	{
		return (0);
	}
	if (i >= length)
	{
		return (1);
	}
	return (check_palindrome(s, i + 1, length - 1));
}
