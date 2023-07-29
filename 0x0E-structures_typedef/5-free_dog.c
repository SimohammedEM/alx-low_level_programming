#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - it is a free memory to be  allocated for a structur struct dog
 * @x: struct dog to be free
 */
void free_dog(dog_t *x)
{
	if (x)
	{
		free(x->name);
		free(x->owner);
		free(x);
	}
}
