#include <stdio.h>
/**
 * main - printing lowercase alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
char l_case;
for (l_case = 'z' ; l_case >= 'a' ; l_case--)
{
putchar(l_case);
}
putchar('\n');
return (0);
}
