#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initalize a variable of type struct dog
 * @d: variable to be initalized
 * @name: name for dog to initalize with
 * @age: age of dog to initalize with
 * @owner: name of owner to initalize with
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
