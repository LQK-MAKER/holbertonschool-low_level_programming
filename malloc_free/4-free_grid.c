#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - afunction
 * @grid : array
 * @height : int
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
