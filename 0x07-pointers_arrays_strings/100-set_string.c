#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer that has value of char/ changed from
 * @to: changed to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
