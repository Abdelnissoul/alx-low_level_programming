#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to pointer at the head
 * @index: index
 * Return: 1 (Success); -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *start;
	unsigned int a;

	start = *head;
	a = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(start);
		return (1);
	}
	while (start != NULL && a < index - 1)
	{
		start = start->next;
		a = a + 1;
	}
	if (start == NULL || start->next == NULL)
	{
		return (-1);
	}

	ptr = start->next;
	start->next = ptr->next;
	free(ptr);

	return (1);
}
