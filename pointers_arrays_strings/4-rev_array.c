#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int az, chab;

	for (chab = n - 1; chab >= n / 2; chab--)
	{
		az = a[n - 1 - chab];
		a[n - 1 - chab] = a[chab];
		a[chab] = az;
	}
}
