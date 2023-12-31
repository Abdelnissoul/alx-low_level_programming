#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: Pointer to the destination of the memory area.
 * @src: pointer to the source of the memory
 * @n: the number of bytes.
 *
 * Return: the copy of a pointer dest after n byte change
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
