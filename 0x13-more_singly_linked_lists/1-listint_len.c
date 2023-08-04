#include "lists.h"

/**
 * listint_len - prints linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		h = h->next;
		nbr++;
	}

	return (nbr);
}
