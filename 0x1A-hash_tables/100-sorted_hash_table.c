#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new hash table.
 * Return: in error - NULL Otherwise - hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_t;
	unsigned long int x;

	hash_t = malloc(sizeof(shash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(shash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		hash_t->array[x] = NULL;
	hash_t->shead = NULL;
	hash_t->stail = NULL;

	return (hash_t);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add.
 * @value: The value of key.
 * Return: Success 1 otherwise 0 fail.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *ptr;
	char *val_cpy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->shead;
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = val_cpy;
			return (1);
		}
		ptr = ptr->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(val_cpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(val_cpy);
		free(new);
		return (0);
	}
	new->value = val_cpy;
	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		ptr = ht->shead;
		while (ptr->snext != NULL && strcmp(ptr->snext->key, key) < 0)
			ptr = ptr->snext;
		new->sprev = ptr;
		new->snext = ptr->snext;
		if (ptr->snext == NULL)
			ht->stail = new;
		else
			ptr->snext->sprev = new;
		ptr->snext = new;
	}

	return (1);
}

/**
 * shash_table_get - Gives the value in a key in a hash table.
 * @ht: pointer to the hash table.
 * @key: The key to get value.
 * Return: value in the key of ht Otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *new_node;

	if (ht == NULL)
		return;

	new_node = ht->shead;
	printf("{");
	while (new_node != NULL)
	{
		printf("'%s': '%s'", new_node->key, new_node->value);
		new_node = new_node->snext;
		if (new_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *new_node;

	if (ht == NULL)
		return;

	new_node = ht->stail;
	printf("{");
	while (new_node != NULL)
	{
		printf("'%s': '%s'", new_node->key, new_node->value);
		new_node = new_node->sprev;
		if (new_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *prev_node;
	shash_node_t *ptr;

	if (ht == NULL)
		return;

	prev_node = ht->shead;
	while (prev_node)
	{
		ptr = prev_node->snext;
		free(prev_node->key);
		free(prev_node->value);
		free(prev_node);
		prev_node = ptr;
	}

	free(head->array);
	free(head);
}
