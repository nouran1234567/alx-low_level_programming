#include "lists.h"

/**
 * sum_listint - calculates the sum of all data in a singly linked list
 *
 * @head: pointer to the first node in a singly linked list
 *
 * Return: calculated sum
 */
int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *temp_node = head;

	while (temp_node)
	{
		x += temp_node->n;
		temp_node = temp_node->next;
	}

	return (x);
}

