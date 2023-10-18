#include "main.h"
/**
 * _strncat - concatenates two strings using n bytes from src
 * @dest: pointer input to destination
 * @src: pointer input to the source
 * @n: value of maximum number of bytes
 * Return: dest (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int x = 0;

	while (dest[length] != '\0')
	{
		length = length + 1;
	}
	while (x < n && src[x] != '\0')
	{
		dest[length] = src[x];
		length++;
		x++;
	}
	dest[length] = '\0';
	return (dest);
}
