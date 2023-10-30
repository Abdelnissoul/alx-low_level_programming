#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string
 * Return: NULL if str = NULL, otherwise: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length = length + 1;
	}

	ptr = malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
