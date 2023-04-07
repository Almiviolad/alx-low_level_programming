#include "hash_tables.h"
/**
 *hash_table_set - set an hahs table node to index
 *@ht: hash table
 *@key: key
 *@value: value of tge node
 *Return: 1(success) or 0(failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (0);
	hash_node = malloc(sizeof(hash_node_t));
	hash_node->key = malloc(strlen(key) + 1);
	if (hash_node->key == NULL)
		return (0);
	hash_node->value = malloc(strlen(value) + 1);
	if (hash_node->value == NULL)
		return (0);
	strcpy(hash_node->key, key);
	strcpy(hash_node->value, value);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = hash_node;
	}
	else
	{
		if (ht->array[index]->key == hash_node->key)
			ht->array[index]->value = hash_node->value;
		else
		{
		hash_node->next = ht->array[index];
		ht->array[index] = hash_node;
		}
	}
	return (1);
}
