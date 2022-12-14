#include "lists.h"
/**
*add_nodeint_end - adds node at tge beginning of a list
*@head: pointer to the first node
*@n: value of node to be added
*Return: new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *former_end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	former_end = *head;
	while (former_end->next != NULL)
	{
		former_end = former_end->next;
	}
	former_end->next = new;
	return (new);
}
