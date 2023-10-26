#include "main.h"

/**
* _pow_recursion - Returns the value of x raised to the power of y.
* @x: The base number.
* @y: The exponent.
*
* Return: The result of x^y, or -1 for errors (when y is negative).
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
/* Exponent is negative, so return -1 as an error. */
return -1;
}
else if (y == 0)
{
/* Base case: Any number raised to the power of 0 is 1. */
return 1;
} else
{
/* Recursively calculate x^y by multiplying x with x^(y-1). */
return x * _pow_recursion(x, y - 1);
}
}
