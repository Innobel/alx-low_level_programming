#include "main.h"
#include <stdlib.h>
/**
* is_digit - Check if a string is composed of digits
* @s: The string to check
*
* Return: 1 if the string is composed of digits, 0 otherwise
*/
int is_digit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
* print_number - Print an integer
* @n: The number to print
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
print_number(n / 10);
_putchar(n % 10 + '0');
}

/**
* main - Multiply two positive numbers
* @argc: The number of command-line arguments
* @argv: An array of command-line argument strings
*
* Return: 0 on success, 98 on incorrect number of arguments or non-digits
*/
int main(int argc, char *argv[])
{
int num1, num2;

if (argc != 3)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (98);
}
if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
print_number(num1 * num2);
_putchar('\n');
return (0);
}
