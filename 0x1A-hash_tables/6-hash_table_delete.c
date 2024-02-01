#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *ptr = ht;
	hash_node_t *new_node;
	hash_node_t *next;
	unsigned long int x = 0;

	while (x < ht->size)
	{
	if (ht->array[x] != NULL)
	{
		new_node = ht->array[x];
		while (new_node != NULL)
		{
		next = new_node->next;
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		new_node = next;
		}
	}
	x++;
	}
	free(ptr->array);
	free(ptr);
}
