#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Allocates a 2D grid of integers.
 * @width: grid's width
 * @height: grid's height
 * Return: pointer to grid (Success), NULL (Fail)
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int x;
	int y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(width * sizeof(int));

		if (ptr[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(ptr[y]);
				free(ptr);
			}
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			ptr[x][y] = 0;
		}
	}
	return (ptr);
}
