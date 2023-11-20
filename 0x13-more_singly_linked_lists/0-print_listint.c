#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints the elements of a singly linked list of integers.
 * @h: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t no_of_node = 0;

	if (h == NULL)
	{
		printf("List is empty\n");
		return (0);
	}

	while (h)
	{
		printf("%d\n", h->n);
		no_of_node++;
		h = h->next;
	}

	return (no_of_node);
}
