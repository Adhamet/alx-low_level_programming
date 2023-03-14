#include"main.h"

/**
* _puts - print string
* @str: array of chars
* Return: Void
*/

void _puts(char *str)
{
	int n = 0;
	char ch = str[n];

	while (ch != '\0')
	{
		_putchar(ch);
		ch = str[++n];
	}

	_putchar('\n');
}
