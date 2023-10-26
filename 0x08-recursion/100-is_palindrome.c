#include "main.h"
#include <string.h>

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The string to be checked.
*
* Return: 1 if s is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
int i = 0;
int j = strlen(s) - 1;

while (i < j)
{
if (s[i] != s[j])
{
return (0); /* Not a palindrome. */
}
i++;
j--;
}

return (1); /* It's a palindrome. */
}
