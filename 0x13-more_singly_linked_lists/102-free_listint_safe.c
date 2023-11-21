#include "lists.h"
/**
 * free_listint_safe - frees linked list
 * @h: pointer to a pointer that points to the head
 * Return: size of the list that was frre'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node;
	listint_t *ptr;
	size_t start = 0;

	if (h == NULL || *h == NULL)
	{
		return (start);
	}

	node = *h;
	while (node != NULL)
	{
		ptr = node->next;
		free(node);
		start = start + 1;
		node = ptr;

		if (node >= *h && node < ptr)
		{
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (start);
}
