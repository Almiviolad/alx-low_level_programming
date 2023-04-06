#include "hash_tables.h"
/**
 *hash_table_create - creates a hash table
 *@size: size of the table( no of nodes
 *Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	if (!size)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(ht->size * sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}
