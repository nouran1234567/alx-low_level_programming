#include "lists.h"

/**
 * free_listint_safe - free a singly linked list
 *
 * @h: pointer to first node in a singly linked list
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int dif;
	listint_t *temp_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
