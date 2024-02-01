#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value of key in hash table
 * @ht: A pointer to the hash table.
 * @key: The key to get the value.
 *
 * Return: value of the key in ht - otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	new_node = ht->array[index];
	while (new_node && strcmp(new_node->key, key) != 0)
	{
		new_node = new_node->next;
	}
	return ((new_node == NULL) ? NULL : new_node->value);
}
