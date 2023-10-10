#include "main.h"
/**
 * times_table - Prints the 9 times table starting with 0
 */
void times_table(void)
{
	int a;
	int b;
	int result;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
result = a * b;
if (b == 0)
_putchar('0');
else
{
if (result < 10)
_putchar(' ');
else
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
if (b != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

