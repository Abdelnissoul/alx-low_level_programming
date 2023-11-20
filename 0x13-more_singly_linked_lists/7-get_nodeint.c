#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head
 * @index: index of the node
 * Return: node, if not exist NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int start;

	start = 0;

	while (head != NULL)
	{
		if (start == index)
		{
			return (head);
		}
		start = start + 1;
		head = head->next;
	}
	return (NULL);
}
