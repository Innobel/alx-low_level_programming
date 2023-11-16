#include "lists.h"
/**
 * list_len - calculate the number of nodes or elment in a linked list.
 * @h: pointer to a linked list
 * Return: no of element in the linked list_t
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t no_ele = 0;

	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr != NULL)
	{
		no_ele++;
		ptr = ptr->next;
	}

	return (no_ele);
}

