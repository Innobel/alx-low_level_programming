#include "main.h"
#include <stdio.h>

/**
 * _islower -Checks whether a character is lowercase
 * @c: character to be checked
 *
 * Return: 1 if characteter is lowecase otherwise 0.
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
