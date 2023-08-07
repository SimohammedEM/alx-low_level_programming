#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at given index
 * @head: pointer to the first node
 * @index: index of node to delete
 *
 * Return: 1 (Success), or -1 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev_tmp;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	while (tmp)
	{
		if (i == index)
		{
			prev_tmp->next = tmp->next;
			free(node);
			return (1);
		}
		i++;
		prev_tmp = tmp;
		tmp = tmp->next;

	}
	return (-1);
}
