#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node from linked list
 * @head: pointer to pointer to the head
 * @index: the index of the node needs to be deleted
 * Return: On Success 1 ; fail : -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int a = 0;

	if (!head || !*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = tmp->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		if (a == index)
		{
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		a++;
	}
	return (-1);
}
