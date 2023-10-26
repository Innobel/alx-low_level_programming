#include "main.h"

/**
* factorial - Returns the factorial of a number.
* @n: The number for which to calculate the factorial.
*
* Return: The factorial of the number, or -1 for errors.
*/
int factorial(int n)
{
if (n < 0)
{
/* Factorial is undefined for negative numbers, so return -1 as an error */
return (-1);
}
if (n == 0 || n == 1)
{
/* Base case: factorial of 0 and 1 is 1. */
return (1);
}
/* Recursively calculate the factorial by calling the function with n - 1. */
return (n * factorial(n - 1));
}
