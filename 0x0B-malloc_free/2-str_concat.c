#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer allocated to memory, Otherwise NULL (fail)
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int length;
	int length1;
	int x;
	int y;

	length = 0;
	length1 = 0;

	if (s1 != NULL)
	{
		while (s1[length])
			length = length + 1;
	}
	else if (s2 != NULL)
	{
		while (s2[length1])
			length1 = length1 + 1;
	}

	ptr = malloc((length + length1 + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < length; x++)
	{
		ptr[x] = s1[x];
	}
	for (y = 0; y < length1; y++)
	{
		ptr[x + y] = s2[y];
	}
	ptr[x + y] = '\0';

	return (ptr);
}
