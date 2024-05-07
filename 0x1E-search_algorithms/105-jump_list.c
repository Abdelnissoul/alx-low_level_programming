#include "search_algos.h"

/**
 * jump_list - This function searches for a target value in a sorted singly
 * linked list using jump search algorithm. It prints the value
 * checked at each step and the [sub]list being searched.
 * @list: A pointer to the head of the linked list to search.
 * @size: The size of nodes in the list.
 * @value: The value to search for.
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *current, *jump;

	if (!list || !size)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (current = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		current = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			current->index, jump->index);

	for (; current->index < jump->index && current->n < value; current = current->next)
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

	return (current->n == value ? current : NULL);
}
