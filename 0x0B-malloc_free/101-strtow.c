#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: string.
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: string.
 * Return: An array of strings (Success). NULL (failed)
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	int num_words = count_words(str);
	if (num_words == 0)
	{
		return (NULL);
	}

	char **words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	int word_count = 0;
	int in_word = 0;
	char *word_start = NULL;

	while (*str)
	{
		if (*str == ' ')
	{
		if (in_word)
		{
			*str = '\0';
			words[word_count++] = word_start;
			in_word = 0;
		}
	}
		else if (!in_word)
	{
		in_word = 1;
		word_start = str;
	}
	str++;
	}

	if (in_word)
	{
		words[word_count++] = word_start;
	}

	words[word_count] = NULL;

	return (words);
}
