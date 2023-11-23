#include "main.h"
/**
 * flip_bits - returns the number of bits to flip from
 * number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits that must flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xornum;
	unsigned int start;

	xornum = n ^ m;
	start = 0;

	while (xornum)
	{
		if (xornum & 1ul)
		{
			start = start + 1;
		}
		xornum = xornum >> 1;
	}
	return (start);
}
