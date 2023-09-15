#include "lists.h"

/**
 * add_dnodeint - adds node at the top of a dlistint_t list
 *
 * @head: list'd head
 *
 * @n: elements value
 *
 * Return: new element adress
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nov;
	dlistint_t *z;
	nov = malloc(sizeof(dlistint_t));
	if (nov == NULL)
		return (NULL);
	nov->n = n;
	nov->prev = NULL;
	z = *head;
	if (z != NULL)
	{
		while (z->prev != NULL)
			z = z->prev;
	}
	nov->next = z;
	if (z != NULL)
		z->prev = nov;
	*head = nov;

	return (nov);
}
