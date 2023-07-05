#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The data (n) stored in the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    int data_value;
    listint_t *temp_node;

    if (head == NULL || *head == NULL)
        return 0;

    temp_node = *head;
    data_value = temp_node->n;
    *head = temp_node->next;
    free(temp_node);

    return data_value;
}
