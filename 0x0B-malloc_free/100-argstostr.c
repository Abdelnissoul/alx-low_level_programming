#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer to start with
 * @av: pointer to argument
 * Return: string (Success), NULL (Failed)
 */
char *argstostr(int ac, char **av)
{
	int x;
	int y;
	int start;
	int final;
	char *str;
	int z;

	start = 0;
	final = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			start = start = 1;
		}
		final = final + start + 1;
		start = 0;
	}
	str = malloc(final * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[z++] = av[x][y];
		}
		str[z++] = '\n';
	}
	str[z] = '\0';

	return (str);
}
