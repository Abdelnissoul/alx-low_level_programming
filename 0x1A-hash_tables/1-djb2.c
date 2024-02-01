#include "hash_tables.h"

/**
 * hash_djb2 - function that implements the djb2 algorithm.
 * @str: The string generating hash.
 * Return: hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
