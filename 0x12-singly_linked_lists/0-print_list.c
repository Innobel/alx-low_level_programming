#include "lists.h"
#include "stdio.h"

/**
 * print_list - Prints all element in list
 * @h: pointer to linked list
 * Return: no of node when successful.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t no_of_nodes = 0;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ptr->len,  ptr->str);
		}

		ptr = ptr->next;
		no_of_nodes++;
	}

	return (no_of_nodes);
}
