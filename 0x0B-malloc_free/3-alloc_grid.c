#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - check code
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **c;

	c = malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		c[i] = malloc(width * sizeof(int));
	}
	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	if (c == NULL || *c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			c[i][j] = 0;
		}
	}
	return (c);
}
