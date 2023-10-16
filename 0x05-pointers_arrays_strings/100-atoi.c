#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: input string
 * Return: the integer that converted from string.
 */
int _atoi(char *s)
{
	int a;
	int b = 0;
	int result = 0;

	a = 1;
	while (s[b] != '\0')
	{
		if (s[b] == '-')
			a = sign * -1;
		if (s[b] >= '0' && s[b] <= '9')
		{
			result = result * 10 + (s[b] - '0');

		if (s[b + 1] < '0' || s[b + 1] > '9')
			break;
		}
		b++
	}
	return (result * sign);
}
