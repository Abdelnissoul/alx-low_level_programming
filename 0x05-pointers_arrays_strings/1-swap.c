#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: is an integer used for swapping
 * @b: integer to swap with
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
