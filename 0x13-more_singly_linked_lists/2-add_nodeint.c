#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list
 * @head: pointer to a pointer of the first
 * element in the list
 * @n: number to add node
 * Return: the address of the new element (S), NULL (F)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_elem;

	new_elem = malloc(sizeof(listint_t));

	if (new_elem == NULL)
	{
		return (NULL);
	}

	new_elem->n = n;
	new_elem->next = *head;
	*head = new_elem;

	return (new_elem);
}
