#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t List
 *
 * @head: hed of list
 * @n: the value of an element
 * Return :the address of a new element, or NULL of failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
