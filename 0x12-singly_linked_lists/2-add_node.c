#include "lists.h"
/**
 * add_node - adds a new node at the biginning of a list
 * @head: points to a pointer to the head
 * @str: string
 * Return: the address of the new element (S); NUll (F)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int length = 0;

	while (str[length])
	{
		length = length + 1;
	}

	n_node = malloc(sizeof(list_t));

	if (!n_node)
	{
		return (NULL);
	}

	n_node->str = strdup(str);
	n_node->length = length;
	n_node->next = (*head);
	(*head) = n_node;

	return (*head);
}
