#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees nodes of a singly linked list
 *
 * @head: pointer to list_t list start head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node_temp;

	while (head)
	{
		node_temp = head->next;
		free(head->str);
		free(head);
		head = node_temp;
	}
}

