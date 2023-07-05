#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @he: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *he)
{
    size_t cnt = 0;

    while (he != NULL)
    {
        printf("%d\n", he->n);
        he = he->next;
        cnt++;
    }

    return cnt;
}
