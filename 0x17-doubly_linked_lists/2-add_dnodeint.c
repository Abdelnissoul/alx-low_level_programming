#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of list
 * @head: Pointer to the head of the list
 * @n: the value of the new node
 * Return: Address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
