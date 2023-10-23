#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory allocated that will be filled
 * @b: value of bytes to be written
 * @n: number of bytes ro be changed
 *
 * Return: pointer to the allocated memory s after it is filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
