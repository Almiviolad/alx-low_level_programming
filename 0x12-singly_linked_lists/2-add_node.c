#include "lists.h"
/**
 *add_node - adss node at the beginning of  a linked list
 *@head: pointer to the address of head pounter
 *@str: malloc'ed str
 *
 *Return:address of new node or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
