#include"main.h"

/**
 * _abs - calculates absolute value of an integer
 * @n: takes in integer input
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
