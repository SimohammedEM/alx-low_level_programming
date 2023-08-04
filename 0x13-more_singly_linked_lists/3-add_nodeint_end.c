#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp;

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	*head = new;
	else
	{
		temp = *head;
		while (temp->next)
		temp = temp->next;
		temp->next = new;
	}
	return (new);
}
