#include "lists.h"
/**
*pop_listint - deletes the first node of a list
*@head:pointer to first node of the list
*Return: head's data
*/
int pop_listint(listint_t **head)
{
	if (!*head)
		return (0);
	listint_t *head_node = *head;
	int temp = head_node->n;

	free(head_node);
	return (temp);
}
