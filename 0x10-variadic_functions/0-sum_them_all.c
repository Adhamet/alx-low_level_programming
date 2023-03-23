#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of parameters
 *
 * Return: int - sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum = 0, i = 0;

	va_start(nums, n);

	for (i = 0; i < (int)n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
