#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table.
 *
 * Description: value pairs to be printed in the array of hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_node;
	unsigned long int i;
	unsigned char stop = 0;

	if (ht == NULL)
		return;

	printf("{");
	i = 0;
	while (i < ht->size)
	{
    	if (ht->array[i] != NULL)
    	{
        	if (stop == 1)
            	printf(", ");

        new_node = ht->array[i];
        while (new_node != NULL)
        {
		printf("'%s': '%s'", new_node->key, new_node->value);
		new_node = new_node->next;
		if (new_node != NULL)
		printf(", ");
        }
        stop = 1;
    	}
    	i++;
	}
	printf("}\n");
}
