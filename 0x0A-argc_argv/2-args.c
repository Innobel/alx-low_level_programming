#include <stdio.h>

/**
 * main - Prints all args content
 * @argc: argument counter
 * @argv: parameter vector
 *
 * Return: Zero
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
