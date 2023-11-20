#include "lists.h"
/**
 * sum_listint - returns the sum of all data of a linked list
 * @head: pointer to the head
 * Return: sum (S), NULL (NULL)
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
