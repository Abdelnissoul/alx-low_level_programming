#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number
 * @argv: pointer to an array
 *Return: 0 success, 1 error
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = a * b;
			printf("%d\n", res);
	}
	return (0);
}
