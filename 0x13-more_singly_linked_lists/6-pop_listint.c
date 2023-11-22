#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list.
* @head: A pointer to a pointer to the head of the linked list.
*
* Return: The data of the deleted head node, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

if (head == NULL || *head == NULL)
return (0);

temp = (*head)->next;

/*
* Check if the new head node exists.
* If it does, retrieve the data from the new head node.
* Otherwise, if the list is now empty, retrieve the data from the original
* head node.
*/
if (*head != NULL) {
data = (*head)->n;
free(*head);
*head = temp;
} else {
free(*head);
*head = NULL;  /* Update head to NULL since the list is now empty */
}

return (data);
}

