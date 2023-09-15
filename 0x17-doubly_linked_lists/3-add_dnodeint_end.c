#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of dlistint_t list
 *
 * @head: list'd head
 *
 * @n: element's value
 *
 * Return: new element address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *z;
	dlistint_t *nov;

	nov = malloc(sizeof(dlistint_t));
	if (nov == NULL)
		return (NULL);
	nov->n = n;
	nov->next = NULL;

	z = *head;
	if (z != NULL)
	{
		nov->prev = z;
		while (z->next != NULL)
			z = z->next;
			z->next = nov;
	}
	else
	{
		nov->prev = NULL;
		*head = nov;
	}

	return (nov);
}
