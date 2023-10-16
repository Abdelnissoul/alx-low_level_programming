#include "main.h"
/**
 * puts_half - prints half of a string followed by a new line
 * @str: string as input
 */
void puts_half(char *str)
{
	int l = 0;
	int half;
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		l++;
	}
	half = l / 2;
	if ((l % 2) == 1)
	{
		half = ((l + 1) / 2);
	}
	for (m = half; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
