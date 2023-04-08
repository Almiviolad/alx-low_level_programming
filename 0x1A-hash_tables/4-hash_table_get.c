#include "hash_tables.h"
/**
 *hash_table_get - gets the value of a key un a hash table
 *@ht: hash table
 *@key: key
 *Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	return (ht->array[index]->value);
}
