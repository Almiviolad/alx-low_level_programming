#include "hash_tables.h"
/**
 *hash_table_print - prints a hash table
 *@ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i, seen;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	seen = 0;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (seen == 1)
				printf(", ");
			seen = 1;
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (ht->array[i]->next != NULL)
			{
				current = ht->array[i]->next;
				while (current != NULL)
				{
					printf(", '%s': '%s'", current->key, current->value);
					current = current->next;
				}
				printf("'%s': '%s'", current->key, current->value);
			}
		}
	}
	printf("}\n");
}
