#include <stdio.h>

/**
 * main - prints program name
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: int, 0 if success otherwise error number
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
