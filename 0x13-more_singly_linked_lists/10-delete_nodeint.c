#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a given index in a singly linked list
 *
 * @head: pointer to the first node in the singly linked list
 *
 * @index: index of a node to be deleted
 *
 * Return: 1 (On Success), or -1 (On Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node = *head;
	listint_t *current_node = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	while (x < index - 1)
	{
		if (!temp_node || !(temp_node->next))
			return (-1);
		temp_node = temp_node->next;
		x++;
	}


	current_node = temp_node->next;
	temp_node->next = current_node->next;
	free(current_node);

	return (1);
}

