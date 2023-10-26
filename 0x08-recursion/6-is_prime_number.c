#include "main.h"

/**
* is_divisible - Helper function to check if n is divisible by any divisor.
* @n: The number to be checked.
* @divisor: The current divisor to check.
*
* Return: 1 if n is divisible by divisor, 0 otherwise.
*/
int is_divisible(int n, int divisor)
{
if (divisor == 1)
{
return (0); /* 1 is not considered a divisor. */
}

if (divisor * divisor > n)
{
return (0); /* n is not divisible by any divisor up to its square root. */
}

if (n % divisor == 0)
{
return (1); /* n is divisible by divisor. */
}

return (is_divisible(n, divisor + 1));
}

/**
* is_prime_number - Checks if a number is a prime number.
* @n: The integer to be checked.
*
* Return: 1 if n is a prime number, 0 otherwise.
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0); /* 0 and 1 are not prime numbers. */
}

if (n == 2)
{
return (1); /* 2 is a prime number. */
}

return (!is_divisible(n, 2));
}

