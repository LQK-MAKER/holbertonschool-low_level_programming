#include "main.h"
/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: This is the input string
 *
 * Return: Result is the length of the string
 */
int _strlen_recursion(char *s)
{
	int a = 0;

		if (*s)
		{
			a++;
			a += _strlen_recursion(s + 1);
		}
	return (a);
}
