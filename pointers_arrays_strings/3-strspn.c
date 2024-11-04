#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: the string to be searched
 * @accept: accepted string
 *
 * Return: number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, z = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				z++;
			}

			b++;
		}

		a++;
	}

	return (z);
}
