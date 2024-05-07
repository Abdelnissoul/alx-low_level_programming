#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array.
  * @array: A pointer to the first element of the array.
  * @size: The size of the array.
  * @value: The value (int) to search for.
  *
  * Return: If the array is NULL -1.
  *         Otherwise, the first index where the value is located.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (!array)
    {
        return (-1);
    }

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
        {
            return (x);
        }
	}
	return (-1);
}
