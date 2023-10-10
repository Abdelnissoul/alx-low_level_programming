#include "main.h"
/**
 * Print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int a;
	char l;

	for (a = 0 ; a <= 10 ; a++)
	{
		for (l = 'a' ; l <= 'z' ; l++)
		{
			_putchar(l);
		}
	_putchar('\n');
	}
}
