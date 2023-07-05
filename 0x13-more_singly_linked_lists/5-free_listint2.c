#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
    listint_t *current;
    listint_t *temp;

    if (head == NULL)
        return;

    current = *head;
    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp); 
    }

    *head = NULL; 
}
