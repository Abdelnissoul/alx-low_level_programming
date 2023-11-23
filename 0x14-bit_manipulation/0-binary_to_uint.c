#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;

	number = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		number = (number * 2) + (*b - '0');
		b = b + 1;
	}
	return (number);
}
