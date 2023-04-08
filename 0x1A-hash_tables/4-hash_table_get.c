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

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index < ht->size)
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		else
			return (NULL);
	else
		return (NULL);
}
