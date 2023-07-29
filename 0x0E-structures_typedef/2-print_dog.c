#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - used to print the structure  struct dog
 * @d: struct dog that we want to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Owner: %s\nAge: %f\nName: %s\n", d->owner, d->age, d->name);
}
