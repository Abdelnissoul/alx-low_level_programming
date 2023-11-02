#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings up to n bytes of s2
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2
 * Return: pointer to string being concatenated (S), NULL (F)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x;
	unsigned int y;
	unsigned int length1;
	unsigned int length2;
	char *ptr;

	length1 = 0;
	length2 = 0;

	if (s1 != NULL)
	{
		while (s1[length1])
			length1 = length1 + 1;
	}
	if (s2 != NULL)
	{
		while (s2[length2])
			length2 = length2 + 1;
	}
	if (n >= length2)
	{
		n = length2;
	}

	ptr = malloc(sizeof(char) * (length1 + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < length1; x++)
	{
		ptr[x] = s1[x];
	}
	for (y = 0; y < n; y++)
	{
		ptr[x + y] = s2[y];
	}
	ptr[x + y] = '\0';
return (ptr);
}
