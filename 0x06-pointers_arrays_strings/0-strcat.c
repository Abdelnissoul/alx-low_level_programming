#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: input as destination
 * @src: input value
 * Return: dest
 */
char  *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x = x + 1;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x = x + 1;
		y = y + 1;
	}
	dest[x] = '\0';
	return (dest);
}
