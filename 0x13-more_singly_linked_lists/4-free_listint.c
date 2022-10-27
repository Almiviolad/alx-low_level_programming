#include "lists.h"
/**
 *free_listint - frees a list
 *@head: pointer to first node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	
	if (head)
	{
		while (head)
		{
			temp = head;
			free(head);
			head = temp->next;
		}
	}
}
