#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: A pointer to the first element of the array.
 * @size: The size of the array.
 * @value: The value (int) to search for.
 * Return: If the array is NULL (-1).
 *         Otherwise, the first index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t etape = sqrt(size);
    size_t qbel;
    
	qbel = 0;

	if (!array)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", qbel, array[qbel]);
	while (array[etape] < value && etape < size)
	{
		qbel = etape;
		etape += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", qbel, array[qbel]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", qbel, etape);
	for (; qbel < (etape + 1) && qbel < size; qbel++)
	{
		printf("Value checked array[%ld] = [%d]\n", qbel, array[qbel]);
		if (array[qbel] == value)
			return (qbel);
	}
	return (-1);
}
