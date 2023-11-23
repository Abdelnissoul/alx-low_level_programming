#include "main.h"
/**
 * get_bit - gets the bet from the index
 * @n: number from index
 * @index: index of bits
 * Return: the number of bits (S); -1 (F)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	else
	{
		return (n >> index & 1);
	}
}
