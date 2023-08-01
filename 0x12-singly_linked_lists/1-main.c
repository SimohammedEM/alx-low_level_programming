#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - test of the code
 *
 * Return: 0.
 */
int main(void)
{
    list_t *head;
    list_t *new_nodes;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;

    new_nodes = malloc(sizeof(list_t));
    if (new_nodes == NULL)
    {
        printf("Error: The Memory allocation is failed\n");
        return (1);
    }

    new_nodes->string = strdup("Hello");
    new_nodes->lent = 5;
    new_nodes->nxt = head;
    head = new_nodes;

    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new_nodes->string);
    free(new_nodes);

    return (0);
}
