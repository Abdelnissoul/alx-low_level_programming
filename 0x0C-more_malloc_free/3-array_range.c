#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value
 * @max: maximum value
 * Return: pointer (S), NULL (F)
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		ptr[x] = min + x;
	}
	return (ptr);
}
