#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - tableau
 * @action: fonction
 * @size: taille du array
 * @array: tableau
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL && action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
