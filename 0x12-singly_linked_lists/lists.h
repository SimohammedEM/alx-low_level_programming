#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - linke list
 * @str: string - malloc string
 * @leng: length of the string
 * @nxto: points to the next node
 *
 * Description: structure of singly linked list node 
 */
typedef struct list_s
{
	char *str;
	unsigned int leng;
	struct list_s *nxt;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
