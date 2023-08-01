#ifndef list
#define list

/**
 * struct list_s - to linke lists
 * @nxt: next node
 * @lent: is the length of string
 * @string: string
 *
 * Description: singly linked list node structure
 *
 */
typedef struct list_s
{
	char *string;
	unsigned int lent;
	struct list_s *nxt;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *string);
list_t *add_node_end(list_t **head, const char *string);
void free_list(list_t *head);

#endif
