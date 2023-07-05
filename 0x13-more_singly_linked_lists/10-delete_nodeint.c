#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position in a linked list
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *current, *previous;
	unsigned int cnt = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	previous = NULL;

	while (current != NULL && cnt < idx)
	{
		previous = current;
		current = current->next;
		cnt++;
	}

	if (current == NULL)
		return (-1);

	if (previous == NULL)
		*head = current->next;
	else
		previous->next = current->next;

	free(current);
	return (1);
}
