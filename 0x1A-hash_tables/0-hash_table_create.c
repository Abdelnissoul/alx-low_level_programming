#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return: the pointer to the new hash table
 * Otherwise - return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int a;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
	{
		free(new_hash);/*this as well*/
		return (NULL);
	}
	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		new_hash->array[a] = NULL;
	}
	return (new_hash);
	free(new_hash);/* this can be the prblm */
