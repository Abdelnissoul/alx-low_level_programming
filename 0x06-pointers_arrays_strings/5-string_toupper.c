#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @p: input pointer
 *
 * Return: p (Success)
 */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a] != '\0')
	{
		if (p[a] >= 'a' && p[a] <= 'z')
		{
			p[a] = p[a] - 32;
		}
		p++;
	}
	return (p);
}
