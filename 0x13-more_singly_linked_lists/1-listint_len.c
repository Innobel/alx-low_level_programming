#include "lists.h"
/**
 * listint_len - Calculates the number of elements in a linked list.
 * @h: A pointer to the head of the linked list (or NULL if the list is empty).
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t no_of_ele = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		no_of_ele++;
	}

	return (no_of_ele);
}
