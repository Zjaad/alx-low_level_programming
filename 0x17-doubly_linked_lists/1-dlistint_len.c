#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;
	const dlistint_t *cur = h;
	while (cur != NULL)
	{
		c++;
		cur + cur->next;
	}
	return (c);
}
