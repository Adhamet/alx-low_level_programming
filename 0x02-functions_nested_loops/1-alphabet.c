#include "main.h"

/**
 * print-alphabet - prints the whole alphabet
 *              a - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch < 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
