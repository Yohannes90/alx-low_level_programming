#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints name
 * @name: pointer to name
 * @f: pointer to function to decide in what case to print it
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
