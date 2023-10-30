#include "main.h"
/**
 * create_array - creates an array of chars, starting  it with a specific char.
 * @size: size of the array
 * @c: character
 * Return: Array (Success), Otherwise NULL (Failed)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; ++i)
			arr[i] = c;
	}
	return (arr);
}
