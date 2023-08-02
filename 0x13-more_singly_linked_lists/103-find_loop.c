#include "lists.h"

/**
 * find_listint_loop - finds a loop in a singly linked list
 *
 * @head: linked list to search for
 *
 * Return: the node where loop start and return, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start = head;
	listint_t *end = head;

	if (!head)
		return (NULL);

	while (start && end && end->next)
	{
		end = end->next->next;
		start = start->next;
		if (end == start)
		{
			start = head;
			while (start != end)
			{
				start = start->next;
				end = end->next;
			}
			return (end);
		}
	}

	return (NULL);
}

