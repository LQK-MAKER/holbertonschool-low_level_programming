#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - fonction
 * @cmp: fonction
 * @size: taille du array
 * @array: tableau
 * Return: fait retour as -1 ou 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
