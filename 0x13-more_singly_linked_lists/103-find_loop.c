#include "lists.h"
/**
 * find_listint_loop - finds a loop in a list
 * @head: pointer to a head
 * Return: address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start;
	iistint_t *fin;

	if (head == NULL)
	{
		return (NULL);
	}
	for (fin = head->next; fin != NULL; fin = fin->next)
	{
		if (fin == fin->next)
		{
			return (fin);
		}
		for (start = head; start != fin; start = start->next)
		{
			if (start == fin->next)
			{
				return (fin->next);
			}
		}
	}
	return (NULL);
}
