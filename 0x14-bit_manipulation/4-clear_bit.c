#include "main.h"
#include <string.h>

/**
 * clear_bit - clears given index
 * @n: pointer to unsigned int
 * @index: holds index
 * Return: 1 if successful, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

	x <<= index;
	*n &= ~x;
	return (1);
}
