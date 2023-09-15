#include "lists.h"

/**
 * dlistint_len - returns count elements in double linked list
 *
 * @h: list's head
 *
 * Return: nodes count
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nmbr;

	nmbr = 0;
	if (h == NULL)
		return (nmbr);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		nmbr++;
		h = h->next;
	}

	return (nmbr);
}
