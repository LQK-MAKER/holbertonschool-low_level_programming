#include "main.h"
/**
 * _sqrt_recursion - returns the natural
 *_sqrt - je sais pas
 * @n: the number ti return
 *
 * Return: if n has a natural
 */

int _sqrt_recursion(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	if (root * root > n)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, root + 1));
}
int _sqrt(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, 0));
}
