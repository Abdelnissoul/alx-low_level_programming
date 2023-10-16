#include "main.h"
/**
 * rev_string - function that reverse a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int a;
	int b;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a / 2; b++)
	{
		char c = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = c;
	}
}
