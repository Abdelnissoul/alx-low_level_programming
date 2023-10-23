#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched
 * @accept: The bytes to search for
 *
 * Return: 0 or the pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s)
		}
		s = s + 1;
	}
	return ('\0');
}
