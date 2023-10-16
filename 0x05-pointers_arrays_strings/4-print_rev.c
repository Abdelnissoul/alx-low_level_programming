#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to a string
 */
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		r++;
	}
	for (; r > 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
