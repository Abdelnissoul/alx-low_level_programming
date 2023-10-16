#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array as input
 * @n: number of elements that will be printed
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
