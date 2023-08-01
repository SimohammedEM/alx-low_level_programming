#include <stdlib.h>
#include "lists.h"

/**
 * list_len - used to return nbr of elmnts in linked list
 * @h: means the pointer to the list_t list
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
