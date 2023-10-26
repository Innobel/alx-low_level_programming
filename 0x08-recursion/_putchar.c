#include <unistd.h>
/**
 * _putchar - function that writew to st output
 * @c: parameter to be recieved
 * return: nothing because it has a void return type
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
