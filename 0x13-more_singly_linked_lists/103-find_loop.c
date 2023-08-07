#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search
 *
 * Return: address of the node where the loop starts, or NULL if ni loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *big, *fin;

	if (!head == NULL)
		return (NULL);

	for (fin = head->next; fin != NULL; fin = fin->next)
	{
		if (fin == fin->next)
			return (fin);
		for (big = head; big != fin; big->next)
			if (big == fin->next)
				return (fin->next)
	}

	return (NULL);
}
