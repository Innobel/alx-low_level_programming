#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints the elements of a singly linked list of integers.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("error\n");
		return (1);
	}

	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
			count++;
	}

	return (count);
}
