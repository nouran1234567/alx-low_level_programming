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
	if (head == NULL)
	return;
	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
