#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node
 *
 * @h: head of the list
 *
 * @idx: index of the new node
 *
 * @n: value of the new node
 *
 * Return: new node address , else NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **z, unsigned int idx, int n)
{
	dlistint_t *nov;
	dlistint_t *head;
	unsigned int x;

	nov = NULL;
	if (idx == 0)
		nov = add_dnodeint(z, n);
	else
	{
		head = *z;
		x = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (x == idx)
			{
				if (head->next == NULL)
					nov = add_dnodeint_end(z, n);
				else
				{
					nov = malloc(sizeof(dlistint_t));
					if (nov != NULL)
					{
						nov->n = n;
						nov->next = head->next;
						nov->prev = head;
						head->next->prev = nov;
						head->next = nov;
					}
				}
				break;
			}
			head = head->next;
			x++;
		}
	}

	return (nov);
}
