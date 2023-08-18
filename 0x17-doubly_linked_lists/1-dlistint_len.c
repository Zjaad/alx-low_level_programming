#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (c);

	while (h->pr != NULL)
		h = h->pr;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
