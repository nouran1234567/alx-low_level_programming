#include "lists.h"

/**
 * print_listint - prints a singly linked list
 *
 * @h: Pointer to the first node
 *
 * Return: the list size
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}

