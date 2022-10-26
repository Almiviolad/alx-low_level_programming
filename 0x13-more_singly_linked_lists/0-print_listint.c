#include "lists.h"
/**
 *print_listint - prints the elements in a singly linked list
 *@h: pointer to the first node of the list
 *Return:number of elemenrs in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *head;
	int count = 0;
	
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h;
	}
	return (count);
}
