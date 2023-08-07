#include "lists.h"

/**
 * pop_listint - pops the head node of a list
 * @head: pointer to the first node
 *
 * Return: value of popped node
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int num;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	num = (*head)->num;
	free(*head);
	*head = node;

	return (num);
}
