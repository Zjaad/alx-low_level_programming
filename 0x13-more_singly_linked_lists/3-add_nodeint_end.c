#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @num: The integer to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int num)
{
    listint_t *new_elem;
    listint_t *temp;

    new_elem = malloc(sizeof(listint_t));
    if (new_elem == NULL)
        return NULL;

    new_elem->n = num;
    new_elem->next = NULL;

    if (*head == NULL)
    {
        *head = new_elem;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_elem;
    }

    return new_elem;
}
