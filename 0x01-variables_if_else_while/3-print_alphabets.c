#include <stdio.h>
/**
 * main - Printing lowercase and uppercase alphabets
 * Return: 0 (Success)
 */
int main(void)
{
char l_case, u_case;
for (l_case = 'a' ; l_case <= 'z' ; l_case++)
{
putchar(l_case);
}
for (u_case = 'A' ; u_case <= 'Z' ; u_case++)
{
putchar(u_case);
}
putchar ('\n');
return (0);
}
