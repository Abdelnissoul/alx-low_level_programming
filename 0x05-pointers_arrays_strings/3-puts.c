#include "main.h"
/**
 * _puts - Prints a string followed by a new line
 * @str: pointer to a string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
