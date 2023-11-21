#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to a pointer that points to head
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *next = NULL;

	if (!head || !*head)
	{
		return (NULL);
	}
	rev = *head;
	*head = NULL;

	while (rev)
	{
		next = rev->next;
		rev->next = *head;
		*head = rev;
		rev = next;
	}
	return (*head);
}
