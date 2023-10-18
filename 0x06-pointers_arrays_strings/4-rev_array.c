#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int swap;
	int i;

	for (i = 0; i < n--; i++)
	{
		swap = a[i];
		a[i] = a[n];
		a[n] = swap;
	}
}
