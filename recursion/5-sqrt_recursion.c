#include "main.h"
/**
 *_sqrt_recursion - je saispasasp
 * @root: je sais pas
 * @n: je sais pas
 * _sqrt: je sais paspasapsi
 * Return: je sais probablement pas
 */
#include <stdio.h>
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
