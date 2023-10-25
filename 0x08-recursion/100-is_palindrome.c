#include "main.h"
/**
 * string_length - Calculates the length of a string.
 * @s: The string to calculate the length of.
 * Return: Length of the string.
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(s + 1));
}

/**
 * checking_palindrome - Checks if a string is a palindrome recursively.
 * @s: The string to be checked.
 * @start: The starting index.
 * @end: The ending index.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int checking_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (checking_palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = string_length(s);

	if (length == 0 || length == 1)
	{
		return (1);
	}
	return (checking_palindrome(s, 0, length - 1));
}
