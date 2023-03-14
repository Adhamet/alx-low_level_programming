#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 if success otherwise error code
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
