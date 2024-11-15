#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate an array
 * @nmemb: int
 * @size: int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
	{
		a[b] = '\0';
	}
	return (a);
}
