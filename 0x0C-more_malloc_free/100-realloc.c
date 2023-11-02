#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer points previous memory
 * @old_size: previous size
 * @new_size: new size in memory allocation
 * Return: pointer (S), NULL (F)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int x;
	unsigned int s;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = malloc(new_size);

	if (ptr2 == NULL)
	{
		return (NULL);
	}

	if (old_size < new_size)
	{
		s = old_size;
	}
	else
	{
		s = new_size;
	}
	for (x = 0; x < s; x++)
	{
		((char *)ptr2)[x] = ((char *)ptr)[x];
	}
	free(ptr);

	return (ptr2);
}
