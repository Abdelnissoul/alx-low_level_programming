#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of linked list
 * @head: points to the head
 * @index: index of the node, starting from 0
 * Return: Address of the nth node, Otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; head != NULL; a++)
	{
		if (a == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
