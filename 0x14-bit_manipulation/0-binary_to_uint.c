#include "main.h"
#include <string.h>

/**
 * binary_to_unit - Converts binary number to unsigned integer.
 *
 * @b: pointer to string of characters.
 *
 * Return: the converted number, or 0 if there is one or more
 * characters in b that is not 0 or 1, or b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, i;
	int val = 1;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++);

	i = len - 1;
	for (; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			result += val;
		val *= 2;
	}

	return (result);
}
