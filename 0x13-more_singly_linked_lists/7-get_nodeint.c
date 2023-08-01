#include "lists.h"

/**
 * get_nodeint_at_index - returns node at an index in a singly linked list
 *
 * @head: pointers to the first node in the singly linked list
 *
 * @index: index of the node to get
 *
 * Return: pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp_node = head;

	while (temp_node && x < index)
	{
		temp_node = temp_node->next;
		x++;
	}

	return (temp_node ? temp_node : NULL);
}

