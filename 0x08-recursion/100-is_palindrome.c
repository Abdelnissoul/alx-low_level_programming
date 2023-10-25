#include "main.h"
/**
 * str_len - Calculates the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: Length of the string.
 */
int str_len(char *s)
{
    if (*s == '\0')
        return 0;
    return (1 + str_len(s + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome recursively.
 * @s: The string to be checked.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
    if (start >= end)
        return 1;

    if (s[start] != s[end])
        return 0;

    return check_palindrome(s, start + 1, end - 1);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int length = str_len(s);

    if (length == 0 || length == 1)
        return 1;

    return check_palindrome(s, 0, length - 1);
}
