#include <stdlib.h>
#include "lists.h"

/**
 * list_len - detemins length of singly linked list
 *
 * @h: pointer to the list_t first node
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

