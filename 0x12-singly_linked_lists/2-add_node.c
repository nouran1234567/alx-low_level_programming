#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node to the start of a singly  linked list
 *
 * @head: double pointer to the list_t list
 * @str: string field of node
 *
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int lnth = 0;

	while (str[lnth])
		lnth++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->lnth = lnth;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
