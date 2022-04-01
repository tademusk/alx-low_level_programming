#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;
	char *comma = "";

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			printf("%s'%s': '%s'", comma, tmp->key, tmp->value);
			comma = ", ";
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}

