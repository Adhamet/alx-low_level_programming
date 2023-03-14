#include "main.h"

/**
* _strncat - Concatenate two strings
*
* @dest: destination string
* @src: source string
* @n: bytes to copy
*
* Return: A pointer to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *tmp = dest;

	while (*dest != '\0')
		dest++;

	for (i = 0; i < n; i++)
	{
		if (*src == '\0')
			break;

		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (tmp);
}
