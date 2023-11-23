#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer
 * @index: index of the bit
 * Return: 1 (S); -1 (F)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
