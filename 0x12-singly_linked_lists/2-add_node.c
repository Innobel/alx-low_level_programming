#include "lists.h"
/**
* add_node - Adds a new node to the beginning of a linked list.
* @head: A pointer to the head of the linked list.
* @str: The string to be duplicated and stored in the new node.
* Return: A pointer to the newly created node if successful,
*         or NULL if memory allocation fails or string duplication fails.
*/
list_t *add_node(list_t **head, const char *str)
{
/* Allocate memory for the new node */
list_t *new = malloc(sizeof(list_t));

/* Check if memory allocation was successful */
if (new == NULL)
{
return (NULL);
}

/* Duplicate the input string and store it in the new node */
new->str = strdup(str);

/* Check if string duplication was successful */
if (new->str == NULL)
{
free(new); /* Free the allocated memory for the new node */
return (NULL);
}

/* Calculate the length of the string and store it in the new node */
new->len = strlen(str);

/* Set the next pointer of the new node to NULL */
new->next = NULL;

/* If the input linked list is not empty, make the new node the new head */
if (*head != NULL)
{
new->next = *head;
}

/* Update the head pointer to point to the new node, making it the new head */
*head = new;

/* Return a pointer to the new node */
return (new);
}

