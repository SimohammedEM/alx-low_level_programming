#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *node;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		tmp = node;
		node = head->next;
		free(tmp);
	}

	*head = NULL;
}
