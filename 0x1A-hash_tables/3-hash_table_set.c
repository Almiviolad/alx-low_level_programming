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
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	hash_node->key = strdup(key);
	if (hash_node->key == NULL)
	{
		free(hash_node);
		return (0);
	}
	hash_node->value = value_copy;
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;

	return (1);
}
