#include "lists.h"
/**
 *insert_nodeint_at_index - inserts node at index
 *@head:pointer to first node
 *@idx:given index
 *@n:value of the node
 *Return: the node or Null if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *node_b4_idx, *node_after_idx;
	unsigned int count;

	count = 0;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	node_b4_idx = *head;
	for (count = 0; head && count < idx - 1; count++)
	{
		node_b4_idx = node_b4_idx->next;
	}
	node_after_idx = *head;
	for (count = 0; head && count < idx; count++)
	{
		node_after_idx = node_after_idx->next;
	}
	if (count < idx)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = node_after_idx;
	node_b4_idx->next = new;
	return (*head);
}
