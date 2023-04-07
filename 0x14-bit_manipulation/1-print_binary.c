#include "main.h"
#include <string.h>

/**
 * print_binary - Prints the binary of a decimal.
 * @n: number to print in binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
