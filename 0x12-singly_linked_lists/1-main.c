#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new_node;
    list_t hello = {"World", 5, NULL};
    size_t i;

    head = &hello;
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new_node->str = strdup("Hello");
    new_node->leng = 5;
    new_node->nxt = head;
    head = new_node;
    i = list_len(head);
    printf("-> %lu elements\n", i);
    free(new_node->str);
    free(new_node);
    return (0);
}
