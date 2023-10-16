#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: used to point a string
 *Return: Length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
	l = l + 1;
	s = s + 1;
	}
return (l);
}
