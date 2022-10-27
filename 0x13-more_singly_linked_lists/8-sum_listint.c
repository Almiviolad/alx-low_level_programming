#include "lists.h"
/**
 *sum_listint - finds the sum of elements in a list
 *@head: the pointer to the first elemebt in a list
 *Return:the sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
