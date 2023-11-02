#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of elements
 * @nmemb: number
 * @size: size
 * Return: pointer or 0 (S), NULL (F)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *bp;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	bp = ptr;
	for (x = 0; x < nmemb * size; x++)
	{
		bp[x] = 0;
	}
	return (ptr);
}
