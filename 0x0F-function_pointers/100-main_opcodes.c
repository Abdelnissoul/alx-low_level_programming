#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * main - prints opcodes
 * @argc: arguments
 * @argv: array arguments
 * Return: 0 (Success) otherwise print error
 */
int main(int arg, char *argv[])
{
	int a;
	int b;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		return (2);
	}
	arr = (char *)main;

	for (a = 0; a < b; a++)
	{
		if (a == b - 1)
		{
			printf("%02hhx\n", arr[a]);
		}
		else
		{
			printf("%02hhx\n", arr[a]);
		}
	}
	return (0);
}
