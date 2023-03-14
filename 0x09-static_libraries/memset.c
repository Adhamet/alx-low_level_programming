#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer to starting bite
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
