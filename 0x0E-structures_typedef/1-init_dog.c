#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - used to initialize a variable
 * @x: using to pointer to struct dog to be initialized
 * @name: it is the name to be initialized
 * @age: it is the age to be initialized
 * @owner: the name of the owner to be  initialized
 */
void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x == NULL)
		x = malloc(sizeof(struct dog));
	x->name = name;
	x->age = age;
	x->owner = owner;
}
