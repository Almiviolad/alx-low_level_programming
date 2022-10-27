#include "lists.h"
/**
 *delete_nodeint_at_index - delee the node at index
 *@head: pointer to the first node
 *@index:given index
 *Return: 1(sucess) or-1(fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *node_b4_index, *node_after_index;
	unsigned int count, no_of_nodes_b4_del, no_of_nodes_after_del;

	if (!*head)
		return (-1);
	node = *head;
	for (count = 0; node; count++)
	{
		node = node->next;
	}
	no_of_nodes_b4_del = count;
	node = *head;
	for (count = 0; node &&  count < index; count++)
	{
		node = node->next;
	}
	node_b4_index = *head;
	for (count = 0; node && count < index - 1; count++)
	{
		node_b4_index = node_b4_index->next;
	}
	node_after_index = node->next;
	node_b4_index->next = node_after_index;
	free(node);
	node = *head;
	for (count = 0; node; count++)
	{
		node = node->next;
	}
	no_of_nodes_after_del = count;
	if (no_of_nodes_b4_del != no_of_nodes_after_del - 1)
		return (-1);
	return (1);
}
