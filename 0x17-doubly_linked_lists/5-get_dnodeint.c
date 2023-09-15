#include "lists.h"

/**
 * get_dnodeint_at_index - search for nth node of dlistint_t linked list
 *
 * @head: pointer to the top of list
 *
 * @index: node index to search for starting from zero
 *
 * Return: null of nth node
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int sz;
	dlistint_t *swp;

	sz = 0;
	if (head == NULL)
	return (NULL);

	swp = head;
	while (swp)
	{
	if (index == sz)
	return (swp);
	sz++;
	swp = swp->next;
	}
	return (NULL);
}
