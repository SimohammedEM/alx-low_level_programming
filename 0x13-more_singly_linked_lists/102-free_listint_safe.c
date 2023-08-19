#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: adresse to pointer to the first node in the list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *nxt, *temp;
	size_t len;
	int diff = 1;

	if (h == NULL || *h == NULL)
		return (0);
	temp = find_listint_loop(*h);
	for (len = 0; (*h != temp || diff) && *h != NULL; *h = nxt)
	{
		len++;
		nxt = (*h)->next;
		if (*h == temp && diff)
		{
			if (temp == temp->next)
			{
				free(*h);
				break;
			}
			len++;
			nxt = nxt->nxt;
			free((*h ->nxt));
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
