#include "main.h"

/**
* _strlen_recursion - Returns the length of a string using recursion.
* @s: The string for which to determine the length.
* Return: The length of the string.
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);  /* Base case: when the end of the string is reached, return 0 */
}

return (1 + _strlen_recursion(s + 1));  /* Recursively call the function */
}
