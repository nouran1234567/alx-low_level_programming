#include <stdlib.h>
#include "lists.h"

/**
 * list_len - detemins length of singly linked list
 *
 * @h: pointer to the list_t list
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}

