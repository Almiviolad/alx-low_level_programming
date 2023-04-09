#include "hash_tables.h"
/**
 *hash_table_delete - deletes entire hash tables
 *@ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hash_table = ht;
	hash_node_t *current, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				temp = current->next;
				free(current->key);
				free(current->value);
					free(current);
				current = temp;
			}
		}
	}
	free(ht->array);
	free(hash_table);
}
