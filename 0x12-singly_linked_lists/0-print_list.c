#include "main.h"
#include "stdio.h"
/**
 * print_list - Prints all element in list
 * @h: pointer to linked list
 * Return: no of node when successful.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t no_of_nodes;

	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr != NULL)
	{
		if (str == NULL)
		{
			printf("[0], (nil)\n");
		}
		else
		{
			printf("[%] %s\n", strlen(str), str);
			count++;
		}

		ptr = ptr->next;
	}

	return (no_of_nodes);
}
