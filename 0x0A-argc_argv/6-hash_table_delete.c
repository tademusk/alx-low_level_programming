#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *head = NULL, *traverse = NULL;

	if (!ht)
		return;
	if (!ht->array)
	{
		free(ht);
		return;
	}

	while (i < ht->size)
	{
		head = ht->array[i];
		while (head)
		{
			traverse = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = traverse;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

