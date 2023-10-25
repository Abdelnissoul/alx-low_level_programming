#include "main.h"
/**
 * is_prime_number - returns 1 if the input is a prime number, otherwise 0.
 * @n : checked numbers
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_not(n, 2));
}
/**
 * is_not - helps checking wether prime or not.
 * @n: checked numbers
 * @d: divisor number
 * Return: 1 for divisible 0 for not
 */
int is_not(int n, int d)
{
	if (d == 1)
	{
		return (0);
	}
	else if (n % d == 0)
	{
		return (1);
	}
	else if (d * d > n)
	{
		return (0);
	}
	return (is_not(n, d + 1));
}
