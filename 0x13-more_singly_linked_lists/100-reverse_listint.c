#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list in-place.
 * @head: A pointer to a pointer to the head of the listint_t linked list.
 * Return: A pointer to the head of the reversed linked list.
 *         Returns NULL if the original list is empty.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}

	(*head) = prev;

	return (*head);
}
