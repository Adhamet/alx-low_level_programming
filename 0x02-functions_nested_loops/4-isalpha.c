#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: character to check if it is an alphabet
 * Return: 1- if it is an alphabet, 0- if not
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
