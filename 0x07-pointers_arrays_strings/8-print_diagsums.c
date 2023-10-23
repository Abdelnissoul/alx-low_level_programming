#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: array repersents th esquare matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int sum;
	int sum2;
	int i;

	sum = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
			sum2 = sum2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum, sum2);
}
