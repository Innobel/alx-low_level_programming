#include "main.h"

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number for which to find the square root.
*
* Return: The natural square root of n, or -1 if n does
* not have a natural square root.
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
/* Negative numbers don't have natural square roots. */
return (-1);
}
else if (n == 0 || n == 1)
{
/* Base cases: The square root of 0 and 1 is the number itself. */
return (n);
}
else
{
/* Start searching for the square root from 2. */
return (find_sqrt(n, 2));
}
}

/**
* find_sqrt - Recursive function to find the square root.
* @n: The number for which to find the square root.
* @i: The current value to check as a possible square root.
*
* Return: The natural square root of n if found, otherwise -1.
*/

int find_sqrt(int n, int i)
{
if (i * i == n)
{
/* Found the square root. */
return (i);
}
else if (i * i > n)
{
/* The square root is not a whole number. */
return (-1);
}
else
{
/* Recursively search for the square root, incrementing i. */
return (find_sqrt(n, i + 1));
}
}


