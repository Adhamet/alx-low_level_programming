#include "main.h"

/**
* _strcat - Concatenate two strings
*
* @dest: destination string
* @src: source string
*
* Return: A pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest != '\0')
		dest++;

	do {
		*dest = *src;
		src++;
		dest++;
	} while (*src != '\0');

	return (tmp);
}
