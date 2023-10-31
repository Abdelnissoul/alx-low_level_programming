#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * calculate_words - Counts the number of words in a string.
 * @str: string.
 * Return: The number of words.
 */
int calculate_words(char *str)
{
	int num = 0;
	int start = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			start = 0;
		}
		else if (!start)
		{
			start = 1;
			num++;
		}
		str++;
	}

	return (num);
}
/**
 * strtow - Splits a string into words.
 * @str: string.
 * Return: An array of strings (Success). NULL (failed)
 */
char **strtow(char *str)
{
	int nw;
	char **w;
	int start = 0;
	char *sw = NULL;
	int wc = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	nw = calculate_words(str);
	if (nw == 0)
	{
		return (NULL);
	}

	w = malloc((nw + 1) * sizeof(char *));
	if (w == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		if (*str == ' ')
	{
		if (start)
		{
			*str = '\0';
			w[wc++] = sw;
			start = 0;
		}
	}
		else if (!start)
	{
		start = 1;
		sw = str;
	}
	str++;
	}

	if (start)
	{
		w[wc++] = sw;
	}

	w[wc] = NULL;

	return (w);
}
