#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the first element in list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t elem_num = 0;

	while (h)
	{
		elem_num = elem_num + 1;
		h = h->next;
	}
	return (elem_num);
}
