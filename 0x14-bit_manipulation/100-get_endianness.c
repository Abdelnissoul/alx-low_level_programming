#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: 0 (big); 1 (small)
 */
int get_endianness(void)
{
	int x = 0;

	return (*(char *)&x);
}
