#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(d->name == NULL) ? printf("nil\n") : printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		(d->owner == NULL) ? printf("nil\n") : printf("Owner: %s\n", d->owner);
	}
}
