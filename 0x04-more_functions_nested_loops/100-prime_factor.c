#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143.
 * Return: 0 (Success)
 */

int main(void)
{
	long num = 612852475143;
	long div = 2;

	while (num > 1)
	{
		if (num % div == 0)
		{
			num = num / div;
		}
		else
		{
			div++;
		}
	}
	printf("%ld\n", div);
	return (0);
}
