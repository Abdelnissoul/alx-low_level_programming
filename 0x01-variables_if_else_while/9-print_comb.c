#include <stdio.h>
/**
 * main - printing all possibile combination of a single digit
 * Return: 0 (Success)
 */
int main(void)
{
int n;
for (n = 0 ; n <= 9 ; n++)
{
	putchar(n + '0');
	if (n != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
