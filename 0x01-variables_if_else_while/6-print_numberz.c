#include <stdio.h>
#include <math.h>
/**
 * main - printing all single digits till 10 with a new line
 * Return: 0 (Success)
 */
int main(void)
{
int num;
for (num = 0 ; num <= 9 ; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
