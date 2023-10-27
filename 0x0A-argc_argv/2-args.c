#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: integer
 * @argv: array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int a;

	a = 0;

	while (argc--)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
