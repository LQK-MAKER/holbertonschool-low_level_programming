#include "main.h"
/**
 * factorial - Write a function that returns the factorial of a given number.
 *
 * @n: This is the input number
 *
 * Return: The factorial of a given number
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
