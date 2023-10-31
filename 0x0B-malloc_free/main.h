#ifndef __MAIN_H__
#define __MAIN_H__

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
void _strcpy(const char *s1, char *s2);
unsigned int _strlen(const char *str);

#endif /* MAIN_H */
