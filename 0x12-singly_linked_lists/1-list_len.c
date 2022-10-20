#include "lists.h"
/**
 *list_len - list elemebt of a linked list
 *@h: pointer to the list
 *
 *Return: No of elments
 */
size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
