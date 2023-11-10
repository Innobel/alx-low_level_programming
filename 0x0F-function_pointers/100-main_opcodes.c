#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - Print opcodes of a given memory region in hexadecimal.
 * @main: A pointer to the memory region.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(unsigned char *main, int num_bytes);
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 1 for an argument count error, \
 * and 2 for a negative byte count.
 */
int main(int argc, char **argv)
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

print_opcodes((unsigned char *)main, num_bytes);

return (0);
}
/**
 * print_opcodes - Print opcodes of a given memory region in hexadecimal.
 * @main: A pointer to the memory region.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(unsigned char *main, int num_bytes)
{
int i;

for (i = 0; i < num_bytes; i++)
{
printf("%02x", main[i]);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");
}
