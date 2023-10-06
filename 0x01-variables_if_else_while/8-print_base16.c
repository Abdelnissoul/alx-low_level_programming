#include <stdio.h>
/**
 * main - Printing numbers of base 16
 * Return: 0 (Success)
 */
int main(void)
{
char num;
for (num = '0' ; num <= '9' ; num++)
{
putchar(num);
}
for (num = 'a' ; num <= 'f' ; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
