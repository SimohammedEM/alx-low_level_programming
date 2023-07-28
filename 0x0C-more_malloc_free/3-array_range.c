#include <stdlib.h>
#include "main.h"

/**
 ** array_range - We want to create an array of integers
 * @mn: is the minimum range of values stored
 * @mx: is the maximum range of values stored and number of elements
 *
 * Return: return to pointer to the new array in the program
 */
int *array_range(int mn, int mx)
{
	int *p;
	int i, s;

	if (mn > mx)
		return (NULL);

	s = mx - mn + 1;

	p = malloc(sizeof(int) * s);

	if (p == NULL)
		return (NULL);

	for (i = 0; mn <= mx; i++)
		p[i] = mn++;

	return (p);
}
