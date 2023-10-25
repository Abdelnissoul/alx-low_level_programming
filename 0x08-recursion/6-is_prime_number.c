#include "main.h"
/**
 * is_prime_number - returns 1 if the input is a prime number, otherwise 0.
 * @n : checked numbers
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int x;

	if (n < 2)
	{
		return (0);
	}
	for (x = 2; x <= n / 2; x++)
	{
		if (n % x == 0)
		{
			return (0);
		}
	}
	return (1);
}
