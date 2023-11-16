#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: points to the head of the list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter = counter + 1;
		h = h->next;
	}
	return (counter);
}
