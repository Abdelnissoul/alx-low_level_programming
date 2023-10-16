#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 *@dest: pasting to ddestination
 *@src: copy from
 *Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
