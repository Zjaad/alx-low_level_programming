#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @he: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *he)
{
    size_t cnt = 0;

    while (he != NULL)
    {
        cnt++;
        he = he->next;
    }

    return cnt;
}
