#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#define NULL ((void *)0)

void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
