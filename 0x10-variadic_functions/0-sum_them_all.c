#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of its parameters
 * @n: number of args
 * @...: variable
 * Return: summation of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list para;
	unsigned int a;
	int sum;

	sum = 0;

	va_start(para, n);
	for (a = 0; a < n; a++)
	{
		sum = sum + va_arg(para, int);
	}
	va_end(para);
	return (sum);
}
