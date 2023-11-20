#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the pointer of the first elem in list
 * @n: number where node will be stored
 * Return: address of new element (S), NULL (F)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_elem;
	listint_t *ptr;

	new_elem = malloc(sizeof(listint_t));
	ptr = *head;

	if (new_elem == NULL)
	{
		return (NULL);
	}

	new_elem->n = n;
	new_elem->next = NULL;

	if (*head == NULL)
	{
		*head = new_elem;
		return (new_elem);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = new_elem;

	return (new_elem);
}
