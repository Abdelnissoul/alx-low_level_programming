#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int a;
	char *sep;
	char *str;
	va_list list;

	a = 0;
	sep = "";

	va_start(list, format);

	while (format[a] && format)
	{
		switch (format[a])
		{
			case 'i':
				printf("%s%d", sep, va_arg(list, int));
				break;

			case 'f':
				printf("%s%f", sep, va_arg(list, double));
				break;

			case 'c':
				printf("%s%c", sep, va_arg(list, int));
				break;

			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", sep, str);
				break;

			default:
				a = a + 1;
				continue;
		}
		sep = ", ";
		a = a + 1;
	}
	va_end(list);
	printf("\n");
}
