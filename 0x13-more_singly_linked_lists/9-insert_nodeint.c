#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given index
 * in a listint_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value to be added to the new node.
 * Return: A pointer to the newly added node, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	ptr = *head;

	for (i = 0; i < idx - 1 && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}

	if (ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
