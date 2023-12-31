#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the first node
 *
 * Return: adress of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL, *nxt = NULL;
	if (!head || !*head)

		return (NULL);
	tmp = *head;
	*head = NULL;
	while (tmp)
	{
		nxt = tmp->next;
		tmp->next = *head;
		*head = tmp;
		tmp = nxt;
	}
	return (*head);
}
