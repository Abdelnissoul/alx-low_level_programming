#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length = length + 1;
	}
	return (checking_palindrome(s, 0, length - 1));
}
/**
 * checking_palindrome - Helps in recursive check if a string is a palindrome.
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
