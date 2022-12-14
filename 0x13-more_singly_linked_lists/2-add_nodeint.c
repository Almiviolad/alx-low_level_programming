#include "lists.h"
/**
 *add_nodeint - adds node at tge beginning of a list
 *@head: pointer to the first node
 *@n: value of node to be added
 *Return: new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(new));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
