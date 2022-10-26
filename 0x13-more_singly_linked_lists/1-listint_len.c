#include "lists.h"
/**
*listint_len - returns the total number in a linked list
*@h: pointer to the first node
*Return: Number of elements in a list
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *head;
	int count = 0;

	head = h;
	while (head->next)
	{
		count++;
		head = head->next;
	}
	count++;
	return (count);
}
