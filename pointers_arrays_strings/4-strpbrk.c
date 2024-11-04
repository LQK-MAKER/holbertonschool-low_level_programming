#include "main.h"
/**
* _strpbrk - search a string for any of a set of bytes
* @s: source string
* @accept: accepted character
*
* Return: the string since the first
*/
char *_strpbrk(char *s, char *accept)
{
	int a = 0, z;

	while (s[a])
	{
		z = 0;

		while (accept[z])
		{
			if (s[a] == accept[z])
			{
				s += a;
				return (s);
			}

			z++;
		}

		a++;
	}

	return ('\0');
}
