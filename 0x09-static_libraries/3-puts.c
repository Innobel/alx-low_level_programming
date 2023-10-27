#include <unistd.h>
#include <string.h>
/**
*_puts - Function that prints a character
*@str: a character string
*
*Return: Nothing
*/

void _puts(const char *str)
{
/* Calculate the length of the input string */
size_t len = strlen(str);
write(1, str, len);
write(1, "\n", 1);
}

