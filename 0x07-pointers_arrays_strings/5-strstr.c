#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring in a string
 * @haystack: The string to be searched
 * @needle: The substring to search for
 * Return: NULL (success)
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *a = haystack;
		char *b = needle;

		while (*haystack && *b && (*haystack == *b))
		{
			haystack = haystack + 1;
			b = b + 1;
		}
		if (*b == '\0')
			return (a);
		haystack = a + 1;
	}
	return (NULL);
}
