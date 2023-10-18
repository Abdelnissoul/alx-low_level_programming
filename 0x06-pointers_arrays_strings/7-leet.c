#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @n: the pointer that will decode
 * Return: n (Success)
 */
char *leet(char *n)
{
	char *l_letters = "aAeEoOtTlL";
	char *l_numbers = "4433007711";
	int a;
	int b;

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; l_letters[b] != '\0'; b++)
		{
			if (n[a] == l_letters[b])
			{
				n[a] = l_numbers[b];
			}
		}
	}
	return (n);
}
