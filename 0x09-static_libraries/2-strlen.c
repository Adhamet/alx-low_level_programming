#include"main.h"

/**
* _strlen - returns the length of a string
* @s: array of chars
* Return: int - length of array
*/

int _strlen(char *s)
{
	int n = 0;
	char ch = s[0];

	while (ch != '\0')
		ch = s[++n];

	return (n);
}
