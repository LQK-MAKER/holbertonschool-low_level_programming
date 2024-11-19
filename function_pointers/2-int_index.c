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

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (array == 0 || size == 0)
		return (-1);

	else if (size <= 0)
		return (-1);
	return (0);
}
