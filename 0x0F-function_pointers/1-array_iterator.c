#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter 
 * on each element of an array
 * @size: the size of the array
 * @array: array
 * @action: pointer to the used function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
