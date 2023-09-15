#include "lists.h"

/**
 * free_dlistint - frees dlistint_t lists.
 *
 * @head: pointer to list's top
 *
 * Return: no return
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *z;

	if (head == NULL)
	return;
	while (head->next)
	{
	z = head
	z = z->next;
	free(z->prev);
	}
	free(z);
}
