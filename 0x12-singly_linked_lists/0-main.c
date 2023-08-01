#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - test
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new_node;
    list_t hello = {"World", 5, NULL};
    size_t x;

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
    i = print_list(head);
    printf("-> %lu elements\n", x);

    printf("\n");
    free(new_node->str);
    new_node->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", x);

    free(new_node);
    return (0);
}
