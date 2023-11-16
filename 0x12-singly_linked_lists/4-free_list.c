#include "main.h"
/**
 * free_list - frees a list
 * @head: points to the head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
