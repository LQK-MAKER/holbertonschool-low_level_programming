#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concat two string
 * @s1: string 1
 * @s2: string 2
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, d;
	char *e;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a]; a++)
			;
	}
	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b]; b++)
			;
	}
	c = a + b + 1;
	e = malloc(c * sizeof(char));
	if (e == NULL)
		return (NULL);
	for (d = 0; d < a; d++)
		e[d] = s1[d];
	for (d = 0; d < b; d++)
		e[d + a] = s2[d];
	e[a + b] = '\0';
	return (e);
}
