#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: 0 (big); 1 (small)
 */
int get_endianness(void)
{
	unsigned long int x;

	x = 1; 

	return (*(char *)&x);
}
