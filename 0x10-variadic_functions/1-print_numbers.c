#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number
 * @...: variable
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list sep;

	a = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(sep, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(sep, int));

		if(a != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(sep);

	printf("\n");
}
