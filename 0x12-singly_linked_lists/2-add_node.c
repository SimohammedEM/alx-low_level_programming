#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
 list_t *newnode;
 unsigned int leng = 0;

 while (str[leng])
 leng++;

 newnode = malloc(sizeof(list_t));
 if (!newnode)
 return (NULL);

 newnode->str = strdup(str);
 newnode->leng = leng;
 newnode->next = (*head);
 (*head) = newnode;

 return (*head);
}
