#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t no_of_ele = 0;

	if (h == NULL)
		return(1);

	while (h != NULL)
	{
		h = h->next;
		no_of_ele++;
	}

	return (no_of_ele);
}
