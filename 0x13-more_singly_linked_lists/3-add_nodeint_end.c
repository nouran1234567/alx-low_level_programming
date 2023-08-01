#include "lists.h"

/**
 * add_nodeint_end - adds a node at the bottom of a singly linked list
 *
 * @head: pointer to the first node in the list
 *
 * @n: value to be inserted in the new element
 *
 * Return: pointer to new node, or NULL when it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_node->next)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}
