#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t cn = 0;
    const list_t *crn = h;

    while (crn != NULL)
    {
        if (crn->str != NULL)
            printf("[%u] %s\n", crn->len, crn->str);
        else
            printf("[0] (nil)");

        cn++;
        crn = crn->next;
    }

    return cn;
}
