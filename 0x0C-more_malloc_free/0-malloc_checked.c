#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - using malloc to allocate memory
 * @b: is the number of bytes to allocate memory
 *
 * Return: return a pointer to the allocated memory of the program
 */
void *malloc_checked(unsigned int b)
{
	void *A;

	A = malloc(b);

	if (A == NULL)
		exit(98);

	return (A);
}
