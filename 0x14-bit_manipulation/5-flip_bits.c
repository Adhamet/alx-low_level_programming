#include "main.h"
#include <string.h>

/**
 * flip_bits - return the number of bits to be flipped
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t;
	int count = 0;

	t = n ^ m;
	while (t > 0)
	{
		if ((t & 1) == 1)
			count++;
		t >>= 1;
	}

	return (count);
}
