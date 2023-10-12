#include "main.h"
/**
 * print_triangle - prints a triangle of #, followed by a new line.
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int c, r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
		for (r = size - c; r > 0; r--)
		{
			_putchar(' ');
		}
		for (r = 1; r <= c; r++)
		{
			_putchar('#');
		}

		_putchar('\n');
		}
	}
}
