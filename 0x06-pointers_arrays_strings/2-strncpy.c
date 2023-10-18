#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer to destination of the string
 * @src: Pointer to the source
 * @n: Max number of chars to copy from source
 * Return: dest (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
