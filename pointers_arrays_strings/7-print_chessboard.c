#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int z, b;

	for (z = 0; a[z][7]; z++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[z][b]);

		_putchar('\n');
	}
}
