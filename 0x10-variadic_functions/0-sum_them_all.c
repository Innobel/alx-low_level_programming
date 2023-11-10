#include "variadic_functions.h"
#include <stdarg.h>
/** sum_them_all - sums all the parameters entered
 * @n: number of parameters passed
 * Return: sum when successuful
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list plus;

	if (n == 0)
		return (0);

	va_start(plus, n);

	for (i = 0; i < n; i++)
		sum += va_arg(plus, int);

	va_end(plus);

	return sum;
}
