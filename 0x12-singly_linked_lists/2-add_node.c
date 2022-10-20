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
	int i;

	if (!str)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	for (i = 0; new_node->str[i] != '\0'; i++)
	{
	};
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
