#include "lists.h"
/**
 * free_listint - it frees the list
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *empty;

	while (head != NULL)
	{
		empty = head;
		head = head->next;
		free(empty);
	}
}
