#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - we want to reallocate a memory block by using malloc and free
 * @p: the pointer to the memory previsouly allocated by using malloc
 * @old_s: the size of the allocated memory for the pointer
 * @new_s: new size of the new memory block
 *
 * Return: return the pointer to the newly allocated memory block
 */
void *_realloc(void *p, unsigned int old_s, unsigned int new_s)
{
	char *p1;
	char *old_p;
	unsigned int i;

	if (new_s == old_s)
		return (p);

	if (new_s == 0 && p)
	{
		free(p);
		return (NULL);
	}

	if (!p)
		return (malloc(new_s));

	p1 = malloc(new_s);
	if (!p1)
		return (NULL);

	old_p = p;

	if (new_s < old_s)
	{
		for (i = 0; i < new_s; i++)
			p1[i] = old_p[i];
	}

	if (new_s > old_s)
	{
		for (i = 0; i < old_s; i++)
			p1[i] = old_p[i];
	}

	free(p);
	return (p1);
}
