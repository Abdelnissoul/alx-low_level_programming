#include <stdio.h>
/**
 * main - Fizz-Buzz test.
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 1 ; num <= 100 ; num++)
	{
		if ((num % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
