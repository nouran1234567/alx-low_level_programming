#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of dlistint_t linked list
 *
 * @head: top of list
 *
 * @index:new node  index
 *
 * Return: 1 on success, -1 o fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *z1;
	dlistint_t *z2;
	unsigned int x;

	z1 = *head;

	if (z1 != NULL)
		while (z1->prev != NULL)
			z1 = z1->prev;

	x = 0;

	while (z1 != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = z1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				z2->next = z1->next;

				if (z1->next != NULL)
					z1->next->prev = z2;
			}

			free(z1);
			return (1);
		}
		z2 = z1;
		z1 = z1->next;
		x++;
	}

	return (-1);
}
