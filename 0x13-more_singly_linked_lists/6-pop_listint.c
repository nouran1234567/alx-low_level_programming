#include "lists.h"

/**
 * pop_listint - pops the head node of a singly linked list
 *
 * @head: pointer to the first node in the singly linked list
 *
 * Return: value inside the elements that was poped
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;

	return (number);
}

