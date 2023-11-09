#include "FUNCTION_POINTERS_H"
/**
 * print_name - Prints a name using a provided printing function.
 * @name: The name to be printed.
 * @f: A function pointer to a printing function for the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name)
	}
}
