#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the linked list.
 * @str: String to be duplicated and added to the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = malloc(sizeof(list_t));

	if(ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);

	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->len = strlen(str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = ptr;
	}

	return (ptr);
}
