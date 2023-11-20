#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The value to be added to the new node.
 * Return: A pointer to the newly added node, or NULL on failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL;  // Return NULL on failure

    /* Initialize the new node */
    new_node->n = n;

    /* Set the next pointer to the current head of the list */
    new_node->next = *head;

    /* Update the head to point to the new node */
    *head = new_node;

    return (new_node);  /* Return a pointer to the new node */
}
