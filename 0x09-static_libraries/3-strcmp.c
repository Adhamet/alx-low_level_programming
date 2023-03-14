#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than,  to  match,  or  be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 - *s2 != 0)
		{
			return (*s1 - *s2);
		}
		else
		{
			s1++;
			s2++;
		}
	}

	return (0);
}
