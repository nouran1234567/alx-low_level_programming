#include "lists.h"

/**
 * reverse_listint - reverses an int in a singly linked list
 *
 * @head: pointer to the first node in a singly linked list
 *
 * Return: pointer to the head of a new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_1 = NULL;
	listint_t *node_2 = NULL;

	while (*head)
	{
		node_2 = (*head)->node_2;
		(*head)->node_2 = node_1;
		node_1 = *head;
		*head = node_2;
	}

	*head = node_1;

	return (*head);
}

