#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: integer, 0 if success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}
