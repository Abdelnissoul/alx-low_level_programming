#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr;
	const listint_t *node;
	size_t start;

	ptr = head;
	node = head;
	start = 0;

	while (ptr != NULL && node != NULL && node->next != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		node = node->next->next;
		start = start + 1;

		if (ptr == node)
		{
			printf("[%p] %d\n", (void *)ptr, ptr->n);
			printf("-> [%p] %d\n", (void *)node, node->n);
			exit(98);
		}
	}
	if (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		start = start + 1;
	}
	return (start);
}
