#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node in a singly linked list,
 *
 * @head: pointer to the first node in a singly linked list
 *
 * @idx: index where the new node is inserted
 * 
 * @n: value to be inserted in the new node
 *
 * Return: pointer to the node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new_node;
	listint_t *temp_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (x = 0; temp_node && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new_node->next = temp_node->next;
			temp_node->next = new_node;
			return (new_node);
		}
		else
			temp_node = temp_node->next;
	}

	return (NULL);
}

