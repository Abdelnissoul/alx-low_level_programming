#include "main.h"
/**
 * print_triangle - prints a triangle of #, followed by a new line.
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int c;
	int r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; c < size ; c++)
		{
			for (r = size - 1 ; r > i ; r--)
			{
				_putchar(' ');
			}
			for (r = 0 ; r <= i ; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
