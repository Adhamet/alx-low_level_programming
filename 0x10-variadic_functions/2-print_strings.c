#include "variadic_functions.h"

/**
 * print_strings - prints strings separated by given separator,
 * followed by a new line
 *
 * @separator: char - separator
 * @n: unsigned int - number of parameters
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(strs, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strs);
}
