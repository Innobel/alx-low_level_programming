#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 *               Returns the head node's data.
 * @head: A pointer to a pointer to the head of the linked list.
 * Return: The data of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;

	return (data);
}
