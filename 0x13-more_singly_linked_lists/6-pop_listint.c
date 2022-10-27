#include "lists.h"
/**
*pop_listint - deletes the first node of a list
*@head:pointer to first node of the list
*Return: head's data
*/
int pop_listint(listint_t **head)
{
	listint_t *head_node;
	int temp;

	if (!*head)
		return (0);
	head_node = *head;
	temp = head_node->n;
	free(head_node);
	return (temp);
}
