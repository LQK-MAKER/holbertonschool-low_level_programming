#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - return the sum
 *@n: the numbers
 *@...: a variable
 *
 * Return: if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list tartenpion;
	unsigned int tibers, sum = 0;

	va_start(tartenpion, n);

	for (tibers = 0; tibers < n; tibers++)
		sum += va_arg(tibers, int);

	va_end(tibers);

	return (sum);
}
