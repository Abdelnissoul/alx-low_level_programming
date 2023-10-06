#include <stdio.h>
/**
 * main - prenting lowercase alphabets followed by new line
 * Return: 0 (Success)
 */
int main(void)
{
char l;
for (l = 'a' ; l <= 'z' ; l++)
{
if (l != 'q' && l != 'e')
{
putchar(l);
}
}
putchar('\n');
return (0);
}
