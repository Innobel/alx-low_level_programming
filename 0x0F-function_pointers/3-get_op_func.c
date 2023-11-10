#include "3-calc.h"

/**
* get_op_func - Selects the correct function to perform the operation
* @s: The operator passed as an argument to the program
*
* Return: A pointer to the corresponding function
*/
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

while (ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
i++;
}
return (NULL);
}
