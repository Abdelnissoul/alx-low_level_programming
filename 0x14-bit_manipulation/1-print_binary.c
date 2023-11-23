#include "main.h"
/**
 * print_binary - prints a number as binary
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bits;
	int num;

	bits = sizeof(n) * 8;
	num = 0;

	while (bits)
	{
		if (n & 1L << --bits)
		{
			_putchar('1');
			num = num + 1;
		}
		else if (num)
		{
			_putchar('0');
		}
	}
	if (!num)
	{
		_putchar('0');
	}
}
