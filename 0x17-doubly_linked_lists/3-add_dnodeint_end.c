#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end
 * of a dlistint_t list
 *
 * @head: head of a list
 * @n: value of an element 
 * Return: the address of a new element, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	 new->n = n;
	 new->next = NULL;
	 
	 h = *head;

	 if (h == NULL)
	{
		 new->prev = NULL;
		 *head = new;
		 return (new);
	}

	while (h->next != NULL)
		  h = h->next;
	h->next = new;
	new->prev = h;

	return (new);
}
