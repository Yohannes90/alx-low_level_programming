#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to newly created dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = NULL;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}
	strcpy(ptr->name, name);
	strcpy(ptr->owner, owner);
	ptr->age = age;

	return (ptr);
}
