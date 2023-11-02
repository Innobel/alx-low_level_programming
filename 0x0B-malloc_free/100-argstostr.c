#include <stdlib.h>

/**
* argstostr - Concatenates all the arguments of the program.
* @ac: The argument count.
* @av: An array of strings (arguments).
*
* Return: A pointer to a newly allocated string, or NULL on failure.
* Each argument is followed by a newline character in the new string.
*/
char *argstostr(int ac, char **av)
{ int length = 0, i = 0, j = 0, index = 0;
char *result;

if (ac == 0 || av == NULL)
return (NULL);

while (i < ac)
{
while (av[i][j])
{
length++;
j++;
}

j = 0;
i++;
}

result = (char *)malloc((sizeof(char) * length) +(ac + 1));
if (result == NULL)
return (NULL);

i = 0;
while (av[i])
{
j = 0;
while (av[i][j])
{
result[index] = av[i][j];
index++;
j++;
}
result[index] = '\n';
index++;
i++;
}

result[index] = '\0';

return (result);
}
