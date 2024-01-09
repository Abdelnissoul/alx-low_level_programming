#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of the list
 * @h: Pointer points to the head
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a = a + 1;
	}
	return (a);
}
