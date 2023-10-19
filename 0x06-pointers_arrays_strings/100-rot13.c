#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @p: pointer to the string
 * Return: p (Success)
 */

char *rot13(char *p)
{
	int x;
	int y;
	char inf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_inf[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; p[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (p[a] == inf[y])
			{
				p[a] = rot_info[y];
			}
		}
	}
	return (p);
}
