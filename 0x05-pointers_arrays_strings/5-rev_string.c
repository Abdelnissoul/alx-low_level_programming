#include "main.h"
/**
 * rev_string - function that reverse a string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	int a = 0;
	int b;
	char c = s[0];

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		a--;
		c = s[b];
		s[b] = s[a];
		s[a] = c;
	}
}
