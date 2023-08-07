#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at index
 * @head: first node in the linked list
 * @index: index of node to return
 *
 * Return: pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	for (node = head, i = 0; node && i < index; node = node->next, i++)
		;
	return (node);
}
