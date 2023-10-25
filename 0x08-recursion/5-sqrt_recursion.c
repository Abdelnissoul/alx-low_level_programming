#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * _sqrt_assist - function helps keep tracking of changing variables.
 * @n: number to calculate the root
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_assist(n, 1));
}
int _sqrt_assist(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
		return (_sqrt_assist(n, a + 1));
}
