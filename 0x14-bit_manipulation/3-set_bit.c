#include "main.h"
#include <string.h>

/**
 * set_bit - Set value of a given index
 * @n: pointer to unsigned int
 * @index: variable pointing to the index
 * Return: 1 if successful, -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

	x <<= index;
	*n |= x;
	return (1);
}
