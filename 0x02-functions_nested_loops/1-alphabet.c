#include "main.h"

/**
 * main - Entry point
 *
 * Description - printing the alphabet lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int ch;

	for (ch = 'a'; ch < 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
