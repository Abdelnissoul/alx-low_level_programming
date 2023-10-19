#include <stdio.h>

int main(void)
{
	int a[5];
	int *p;

	p = a;

	*(a + 2) = 98;
	printf("a[2] = %d\n", a[2]);

	return (0);
}
