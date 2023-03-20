#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defined new type for the ff elements
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Descripiton: new type for managing dog info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
