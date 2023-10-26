#include "main.h"
#include <string.h>

/**
* is_palindrome_recursive - Helper function to check if a string is a palindrom
* @s: The string to be checked.
* @start: The starting index of the current comparison.
* @end: The ending index of the current comparison.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/

int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1); /* Base case: It's a palindrome. */
}

if (s[start] != s[end])
{
return (0); /* Characters do not match, not a palindrome. */
}

return (is_palindrome_recursive(s, (start + 1), (end - 1)));
}

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The string to be checked.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
int length = strlen(s);

if (length <= 1)
{
return (1); /* Empty string or single-character string is a palindrome.*/
}

return (is_palindrome_recursive(s, 0, (length - 1)));
}

