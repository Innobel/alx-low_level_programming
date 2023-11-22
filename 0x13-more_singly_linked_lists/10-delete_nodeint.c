#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index in a linked list
 * @head: A pointer to the pointer to the head node of the list.
 * @index: The index of the node to delete. Indexing starts at 0.
 * Return: 1 if successful, -1 if the node at the specified index does not
 * exist or if the head pointer is NULL.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1 = *head;
	listint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		while (i < index)
		{
			if (temp == NULL)
				return  (-1);

			temp1 = temp;
			temp = temp->next;
			i++;
		}

		if (temp == NULL)
			return (-1);

		temp1->next = temp->next;
		free(temp);
	}

	return (1);
}
