#include "lists.h"
/**
 * free_listint2 - Free a listint_t linked list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

	if (head == NULL || *head == NULL)
		return; /* Check if the head or the list is already NULL */

	current = *head;

	while (current != NULL)
	{
		next_node = current->next; /* save the next node */
		free(current); /* Free the current node */
		current = next_node; /* Move to the next node */
	}

	*head = NULL; /* Set the head to NULL after freeing the list */
}
