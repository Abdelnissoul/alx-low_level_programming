#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched for
 * @accept: accepted character
 * Return: Always n number of bytes (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				x++;
				break;
			}
			else if (accept[x + 1] == '\0')
			{
				return (a);
			}
		}
		s = s + 1;
	}
	return (a);
}
