#include "main.h"

/**
* wildcmp - Compares two strings considering the special character '*'.
* @s1: The first string.
* @s2: The second string with '*' as a special character.
*
* Return: 1 if the strings can be considered identical, 0 otherwise.
*/
int wildcmp(char *s1, char *s2)
{
/* If both strings are empty, they are considered identical. */
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}

/* If the current character in s2 is '*', we have two choices: */
/* 1. Ignore the '*' and continue comparing the rest of s1 and s2. */
/* 2. Use the '*' to match one or more characters in s1. */
if (*s2 == '*')
{
/* Case 1: Ignore '*' and compare s1 and s2. */
if (wildcmp(s1, s2 + 1) == 1)
{
return (1);
}

/* Case 2: Use '*' to match one or more characters in s1. */
if (*s1 != '\0' && wildcmp(s1 + 1, s2) == 1)
{
return (1);
}
}

if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}

/* If none of the conditions are met, the strings are not identical. */
return (0);
}

