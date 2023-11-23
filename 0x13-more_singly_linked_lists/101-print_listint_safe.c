#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the listint_t linked list.
 * Return: The number of nodes in the list.
 * 		Exits with status 98 if the function fails (encounters a loop).
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	if (head == NULL)
		return (0);

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;
		fast = fast->next->next;

		/* Check for a loop */
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}

		count++;
	}

	if (fast != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}

	return (count);
}
