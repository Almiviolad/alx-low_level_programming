#include "lists.h"
/**
 *get_nodeint_at_index - get a node at index n
 *@head: pointer to first node
 *@index:position of the node starting from 0
 *Return: the node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; head && count < index; count++)
	{
		head = head->next;
	}
	if (count < index)
		return (NULL);
	return (head);
}
