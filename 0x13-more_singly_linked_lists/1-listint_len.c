#include "lists.h"

/**
 * listint_len - returns the number of elements in a singly linked lists
 *
 * @h: pointer to the first node
 *
 * Return: the list size
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}

