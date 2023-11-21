#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a pointer of head elements
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *empty;


	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		empty = (*head)->next;
		free(empty);
		*head = empty;
	}
	*head = NULL;
}
