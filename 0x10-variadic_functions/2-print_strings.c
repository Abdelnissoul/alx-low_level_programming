#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string
 * @n: number
 * @...: string to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *str;
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
		str = va_arg(sep, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (a != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(sep);
	printf("\n");
}
