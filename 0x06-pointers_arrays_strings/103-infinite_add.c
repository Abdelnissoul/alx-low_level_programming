#include "main.h"
/**
 * infinite_add - function that adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: where the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x;
	int y;
	int z;
	int l1;
	int l2;
	int c;
	int sum;

	c = 0;

	for (l1 = 0; n1[l1] != '\0'; l1++)
		NULL;
	for (l2 = 0; n2[l2] != '\0'; l2++)
		NULL;

	if (l1 > size_r || l2 > size_r)
		return (0);
	x = l1 - 1;
	y = l2 - 1;
	r[size_r] = '\0';
		z = size_r - 1;

		while (x >= 0 || y >= 0 || c)
		{
			sum = c;
			if (x >= 0)
				sum = sum + n1[x--] - '0';
			if (y >= 0)
				sum = sum + n2[y--] - '0';
				c = sum / 10;
				r[z--] = (sum % 10) + '0';
		}
		if (z < 0)
		{
			return (0);
		}
	return (r + z + 1);
}
