#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s: pointer to the string to be searched
 * @c: input character to be stored
 *
 * Return: (0) or address of s Success
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return ('\0');
}
