#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fils memory with a constant byte
 *@m: the memory area to be filled
 *@x: the char to copy
 *@n: number of times of  copying x
 *
 * Return: the pointer to the memory area m
 */
char *_memset(char *m, char x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		m[i] = x;
	}

	return (m);
}

/**
 * *_calloc - allocates memory for an array step 2 
 * @nmemx: the number of elements in the array
 * @s: the size of each element
 *
 * Return: return rhe pointer to allocated memory
 */
void *_calloc(unsigned int nmemx, unsigned int s)
{
	char *p;

	if (nmemx == 0 || s == 0)
		return (NULL);

	p = malloc(s * nmemx);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemx * s);

	return (p);
}
