#include "main.h"

/**
* binary_to_uint - Converts a binary number represented
* as a string to an unsigned integer.
*
* @b: A pointer to a string of '0' and '1' characters.
*
* Return: The converted unsigned integer.
*         If the input string is NULL or contains
*         characters other than '0' or '1', return 0.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result;
int i = 0;

if (b == NULL)
{
return (0);  /* Return 0 if the input string is NULL */
}

result = 0;

/* Iterate through each character in the string */
while (b[i] != '\0')
{
/* Check if the character is '0' or '1' */
if (b[i] == '0' || b[i] == '1')
{
/* Shift the result to the left and add the current bit */
result = (result << 1) | (b[i] - '0');
i++;
}
else
{
return (0);  /* Return 0 if a character is not '0' or '1' */
}
}

return (result);
}
