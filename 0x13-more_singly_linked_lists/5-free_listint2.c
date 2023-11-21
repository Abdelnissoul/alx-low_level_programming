#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a pointer of head elements
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *empty;
	listint_t *ptr;


	if (head == NULL)
	{
		return;
	}
	empty = *head;
	while (empty)
	{
		ptr = empty;
		empty = empty->next;
		free(ptr);
	}
	*head = NULL;
}
