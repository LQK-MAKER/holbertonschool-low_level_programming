#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate
 * @b: size of memory
 * Return: pointer to new
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	else
		return (a);
}
