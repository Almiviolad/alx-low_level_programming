#include "lists.h"
/**
 *free_listint2 - frees a list
 *@head: pointer to first node
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	/* task condition */
	*head = NULL;
}
