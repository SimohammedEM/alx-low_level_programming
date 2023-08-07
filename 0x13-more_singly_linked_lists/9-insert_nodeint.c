#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: adress of pointer to the first node
 * @idx: index where the new node
 * @n: value of the new node
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (tmp)
	{
		if (i == idx - 1)
		{

			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
