#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: points to the head of the list
 * @n: new node value
 * Return: Address of new element, Otherwise NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *old_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!head || !new_node)
	{
		if (new_node)
		{
			free(new_node);
		}
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		old_node = *head;
		while (old_node->next)
		{
			old_node = old_node->next;
		}
		old_node->next = new_node;
		new_node->prev = old_node;
	}
	return (new_node);
}
