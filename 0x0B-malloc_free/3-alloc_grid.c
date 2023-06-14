#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: The width elments of the arrays.
 * @height: The column elements of the array.
 * Return: returns a pointer or a NULL.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	grid = malloc(sizeof(int *) * width);

	if (width <= 0 || height <= 0)
		return (NULL);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * height);
		if (grid == NULL)
		{
			free(grid);
			for (j = 0; j <= i; j++)
				free(grid[j]);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
