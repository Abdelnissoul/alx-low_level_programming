#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: pointer to pointer points the head
 * @idx: index of the new node
 * @n: what's inside the node
 * Return: address of new node(S), NULL (F)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *addr;
	listint_t *ptr;
	unsigned int a;

	ptr = *head;

	addr = malloc(sizeof(listint_t));

	if (!addr || !head)
	{
		return (NULL);
	}
	addr->n = n;
	addr->next = NULL;

	if (idx == 0)
	{
		addr->next = *head;
		*head = addr;
		return (addr);
	}
	for (a = 0; ptr && a < idx; a++)
	{
		if (a == idx - 1)
		{
			addr->next = ptr->next;
			ptr->next = addr;
			return (addr);
		}
		else
		{
			ptr = ptr->next;
		}
	}
	return (NULL);
}
