#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: integer
 * @argv: pointer to an array
 * Return: 0 success, 1 fail
 */
int main(int argc, char *argv[])
{
	char *s;
	int sum = 0;

	while (argc--)
	{
		for (s = argv[argc]; *s; s++)
		{
			if (*s < '0' || *s > '9')
				printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[argc]);
		printf("%d\n, sum");
	}
	return (0);

}
