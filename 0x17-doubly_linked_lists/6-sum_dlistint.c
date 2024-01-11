#include "lists.h"
/**
 * sum_dlistint - sums the value of a dlist
 * @head: pointer to current head node
 * Return: sum of all values
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
