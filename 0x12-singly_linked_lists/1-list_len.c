#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elments in linked list
 * @h: A pointer to the list_t list
 *
 * Return: nbr of elmnts in h
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->nxt;
	}
	return (x);
}
