#include "lists.h"

/**
 * print_listint - print linked list
 * @h: ointer to first node
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nbr++;
	}

	return (nbr);
}
