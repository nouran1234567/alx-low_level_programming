#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees nodes of a singly linked list
 *
 * @head: list_t list to be freed
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}

