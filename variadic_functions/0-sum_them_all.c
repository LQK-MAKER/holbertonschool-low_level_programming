#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - print the sums of all its parameters
 * @n : number of parameters
 *
 * Return: 0 or the result of the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	va_list args;

	va_start(args, n);

	int sum = 0;

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
