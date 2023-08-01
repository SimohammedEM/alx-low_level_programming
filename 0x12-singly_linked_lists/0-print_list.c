#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements of a list
 * @h: pointer to the list_t to have printing
 *
 * Return: used to the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->string)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->lent, h->string);
		h = h->nxt;
		i++;
	}

	return (i);
}
