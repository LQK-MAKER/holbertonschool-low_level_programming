#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  */
void print_diagsums(int *a, int size)
{
	int z, sum1 = 0, sum2 = 0;

	for (z = 0; z < size; z++)
	{
		sum1 += a[(size + 1) * z];
		sum2 += a[(size - 1) * (z + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
