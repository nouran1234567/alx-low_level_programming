#include "lists.h"

/**
 * sum_dlistint - calculats the sum data of doubly linked list
 *
 * @head: top of list
 *
 * Return: data sum
 */

int sum_dlistint(dlistint_t *head)
{
	int tot;

	tot = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			tot += head->n;
			head = head->next;
		}
	}

	return (tot);
}
