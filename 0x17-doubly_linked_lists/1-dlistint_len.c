#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in the linked list
 * @h: Pointer to the head of the list
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		h = h->next;
		a = a + 1;
	}
	return (a);
}
