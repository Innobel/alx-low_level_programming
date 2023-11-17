#include "lists.h"
/**
 * free_list - Frees a list_t linked list.
 * @head: A pointer to the head of the linked list
 */

void free_list(list_t *head)
{
	list_t *ptr, *next;

	ptr = head;

	while (ptr != NULL)
	{
		next = ptr->next; /* save the next node before freeing ptr */
		free(ptr->str); /* Free the dulpicated string */
		free(ptr); /* Free ptr node */
		ptr = next; /* Move to the next node */
	}
}
