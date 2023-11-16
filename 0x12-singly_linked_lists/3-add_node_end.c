#include "lists.h"
/**
 * add_node_end - adds a new node at the end of list
 * @head: 
 * @str: 
 * Return: address of new element (S), NULL (F)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = *head;
	list_t *n_node;

	n_node = malloc(sizeof(list_t));

	if (!head || !n_node)
	{
		return (NULL);
	}
	if (str)
	{
		n_node->str = strdup(str);
		if (!n_node->str)
		{
			free(n_node);
			return (NULL);
		}
		n_node->len = _strlen(n_node->str);
	}
	if (node)
	{
		for (; node->next; node = node->next)
			continue;
		node->next = n_node;
	}
	else
	{
		*head = n_node;
	}
	return (n_node);
}
