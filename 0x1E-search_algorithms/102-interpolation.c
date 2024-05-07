#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search.
  * @size: The size of the array.
  * @value: The value (int) to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the index of the first occurrence of the value.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left, right, probe;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		probe = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));
		if (probe < size)
			printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", probe);
			break;
		}

		if (array[probe] == value)
			return (probe);
		if (array[probe] > value)
			right = probe - 1;
		else
			left = probe + 1;
	}

	return (-1);
}
