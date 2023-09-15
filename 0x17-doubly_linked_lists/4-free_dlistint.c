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

	z = NULL;

	if (head == NULL)
		return;

	while (head)
	{
		z = head;
		head = head->next;
		free(z);
	}
}
