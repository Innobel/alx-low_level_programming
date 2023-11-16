#include "lists.h"
#include "stdio.h"

int _strlen(char *s);
/**
 * print_list - Prints all element in list
 * @h: pointer to linked list
 * Return: no of node when successful.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t no_of_nodes = 0;

	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", _strlen(ptr->str), ptr->str);
			no_of_nodes++;
		}

		ptr = ptr->next;
	}

	return (no_of_nodes);
}

/**
 * _strlen - calculate the len of a string.
 * @s: character pointer.
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0, i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
