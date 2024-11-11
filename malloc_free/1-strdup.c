#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a newly-allocated space in memory
 * @str: string
 * Return: char
 */
char *_strdup(char *str)
{
	char *a;
	int b, c = 0;

	if (str == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		c++;

	a = malloc(sizeof(char) * (c + 1));

	if (a == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		a[b] = str[b];

	a[c] = '\0';

	return (a);
}
