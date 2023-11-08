#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @size: the number of elements in array
 * @cmp: pointer to the function for comparing values
 * @array: array
 * Return: -1 if success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
			{
				return (x);
			}
		}
	}
	return (-1);
}
