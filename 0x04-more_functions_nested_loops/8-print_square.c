#include "main.h"
/**
 * print_square - prints a squareof #, followed by a new line.
 * @size: the size of square
 */
void print_square(int size)
{
	int c;
	int r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0 ; c < size ; c++)
		{
			for (r = 0 ; r < size ; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
