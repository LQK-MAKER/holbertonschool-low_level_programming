#include "main.h"
/**
 * _memset - fill memory
 * @s: memory area ti fill
 * @b: constant byte to fill
 * @n: bytes of memory
 *
 * Return: the memory failled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
