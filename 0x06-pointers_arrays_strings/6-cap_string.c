#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str: the string that supposed to be capitalized
 * Return: str (Success)
 */
char *cap_string(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a == 0 || str[a - 1] == ' ' || str[a - 1] == '\t' ||
		str[a - 1] == '\n' || str[a - 1] == ',' || str[a - 1] == ';' ||
		str[a - 1] == '.' || str[a - 1] == '!' || str[a - 1] == '?' ||
		str[a - 1] == '"' || str[a - 1] == '(' || str[a - 1] == ')' ||
		str[a - 1] == '{' || str[a - 1] == '}')
		{
			if (str[a] >= 'a' && str[a] <= 'z')
			{
				str[a] = str[a] - 32;
			}
		}
		a = a + 1;
	}
	return (str);
}
