#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  * @array: A pointer to the first element of the array.
  * @size: The size(int) of the array.
  * @value: The value to search for
  * Return: If the array is NULL (-1).
  *         Otherwise, the index where the value is located.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t x;
	size_t left;
	size_t right;

	if (!array)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = left + (right - left) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			right = x - 1;
		else
			left = x + 1;
	}

	return (-1);
}
