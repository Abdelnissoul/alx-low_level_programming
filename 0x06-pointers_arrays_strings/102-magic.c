#include <stdio.h>

int main(void)
{
	int a[10];
	int *p;

	p = a;

	*(p + 2) = 98;
	printf("a[2] = %d\n", a[2]);

	return (0);
}
