#include "hash_tables.h"
/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: pointer to the hash table.
 * @key: The key to add.
 * @value: The value of the key.
 *
 * Return: if fail 0 Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash;
	char *second_value;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	second_value = strdup(value);
	if (second_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	i = index;
	while (ht->array[i] != NULL)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = second_value;
			return (1);
		}
		i++;
	}
	new_hash = malloc(sizeof(hash_node_t));
	if (new_hash == NULL)
	{
		free(second_value);
		return (0);
	}
	new_hash->key = strdup(key);
	if (new_hash->key == NULL)
	{
		free(new_hash);
		return (0);
	}
	new_hash->value = second_value;
	new_hash->next = ht->array[index];
	ht->array[index] = new_hash;
	return (1);
}
