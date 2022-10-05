#include <stdio.h>
#include <stdlib.h>
/**
 **alloc_grid- concatenate two string
 *@width: obviously the width of tthe 2d array
 *@height: the height
 *Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for ( ; h <= 0; h--)
			{
				free(grid[h]);
				free(grid);
			}
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
