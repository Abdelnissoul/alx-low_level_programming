#include "search_algos.h"

/**
  * advanced_binary_recursive - Searches recursively for a value in a sorted array.
  * @array: A pointer to the first element of the [sub]array to search.
  * @start: The starting index of the [sub]array to search.
  * @end: The ending index of the [sub]array to search.
  * @value: The value to search for.
  * Return: If the value is not present, -1.
  * Otherwise, the index where the value is located.
  */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (end < start)
		return (-1);

	printf("Searching in array: ");
	for (mid = start; mid < end; mid++)
		printf("%d, ", array[mid]);
	printf("%d\n", array[mid]);

	mid = start + (end - start) / 2;
	if (array[mid] == value && (mid == start || array[mid - 1] != value))
		return (mid);
	if (array[mid] >= value)
		return (advanced_binary_recursive(array, start, mid, value));
	return (advanced_binary_recursive(array, mid + 1, end, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search.
  * @size: The size of the array.
  * @value: The value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
