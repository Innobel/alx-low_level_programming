#include "main.h"
#include <unistd.h>

/**
 * _isalpha - check if character is alpphabet.
 * @c: character to be checked.
 *
 * Return: 1 on sucess otherwise 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && 'Z'));
}
