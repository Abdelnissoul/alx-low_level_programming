#include "lists.h"
/**
 * free_dlistint - frees a dlist
 * @head: pointer to the head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
