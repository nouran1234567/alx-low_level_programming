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

	z = head
	if (z == NULL)
	return;
	while (z->next)
	{
	z = z->next;
	free(z->prev);
	}
	free(z);
}
