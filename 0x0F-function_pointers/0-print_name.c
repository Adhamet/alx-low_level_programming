#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: string
 * @f: a pointer to a function that takes a string as it's pararmeter
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
