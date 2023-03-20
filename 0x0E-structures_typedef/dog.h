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
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
