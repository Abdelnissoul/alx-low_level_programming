#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Points to a pointer to the head
 * @idx: index where the node should be added
 * @n: new node value
 * Return: Address of the new node, Otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *now = *h;
	dlistint_t *new_node;

	if (!h)
	{
		return (NULL);
	}
	if (!h || !*h)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = now;
	new_node->next = now->next;
	now->next = new_node;
	if (new_node->next)
	{
		new_node->next->prev = new_node;
	}
	return (new_node);
}
