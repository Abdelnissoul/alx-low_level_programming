#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * main - main function
 * @argc: argument
 * @argv: argument pointer
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int (*my_function)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	my_function = get_op_func(argv[2]);

	if (!my_function)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '%' || argv[2][0] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", my_function(a, b));
	return (0);
}
