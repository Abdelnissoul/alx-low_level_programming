#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to another that points to the head
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int num;
	
	ptr = *head;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	num = ptr->n;
	*head = ptr->next;
	free(ptr);

	return (num);
}
