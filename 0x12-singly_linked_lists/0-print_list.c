#include "lists.h"
/**
 * _strlen - returns the length of str
 * @str: the string
 * Return: length of the str
 */
int _strlen(char *str)
{
	int a = 0;

	if (!str)
	{
		return (0);
	}
	while (*str++)
	{
		a = a + 1;
	}
	return (a);
}
/**
 * print_list - prints all the elements of a list_t list
 * @h: points to the head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", _strlen(h->str), h->str);
		}
		else
			printf("[0] (nil)\n");
		h = h->next;
		a = a + 1;
	}
	return (a);
}
