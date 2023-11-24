#include "main.h"
/**
 * print_binary - converts decimal to binary
 * @n: the decimal fed to the function
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int bitwise_operation = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

		while (bitwise_operation >= 0)
		{
			if (n & (1UL << bitwise_operation))
			{
				_putchar('1');
				flag = 1;
			}
			else if (flag)
			{
				_putchar('0');
			}

			bitwise_operation--;
		}

	_putchar('\n');
}
