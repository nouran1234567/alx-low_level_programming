#include "lists.h"

/**
 * free_listint2 - frees a singly linked list of ints
 *
 * @head: pointer to the first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
	}

	*head = NULL;
}

