#include "lists.h"

/**
 * print_dlistint - prints all the elements dlistint_t list
 *
 * @h: list's head
 *
 * Return: nodes count
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nmbr;
	nmbr = 0;
	if (h == NULL)
		return (nmbr);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nmbr++;
		h = h->next;
	}

	return (nmbr);
}
