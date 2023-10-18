#include "main.h"
/**
 * _strcmp - comapre string values
 * @s1: pointer for the first string
 * @s2: pointer for the second one
 *
 * Return: s1[v] - s2[v]
 */
int _strcmp(char *s1, char *s2)
{
	int v = 0;

	while (s1[v] && (s1[v] == s2[v]))
	{
		v++;
	}
	return (s1[v] - s2[v]);
}
