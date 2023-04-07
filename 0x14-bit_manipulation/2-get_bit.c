#include "main.h"
#include <string.h>

/**
 * get_bit - Returns the value of a bit a given index.
 * @n: - unsigned integer holding the number.
 * @index: - unsigned integer holding the index.
 * Return: Bit of the given index, -1 if error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
