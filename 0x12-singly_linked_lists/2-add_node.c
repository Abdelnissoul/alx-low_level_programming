#include "lists.h"
/**
 * add_node - adds a new node at the biginning of a list
 * @head: points to a pointer to the head
 * @str: string
 * Return: the address of the new element (S); NUll (F)
 */
list_t *add_node(list_t **head, const char *str)
{
	char *n_str;
	list_t *n_node;
	list_t length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->str = strdup(str);
	if(n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length = length + 1;
	}

	n_node->length = length;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
