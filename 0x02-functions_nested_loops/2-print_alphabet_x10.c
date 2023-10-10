#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
int a;
char l;
for (a = 0 ; a <= 9 ; a++)
{
for (l = 'a' ; l <= 'z' ; l++)
{
_putchar(l);
}
_putchar('\n');
}
}
