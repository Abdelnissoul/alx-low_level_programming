#include "lists.h"
/**
 * print_listint - prints all the elements in the list
 * @h: pointer to the first node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num = node_num + 1;
	}
	return (node_num);
}
