#include "hash_tables.h"
/**
 * create_node - Creates a new node
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 * Return: 1 if success, 0 if fail
 */
int create_node(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	char *key_copy, *value_copy;
	unsigned long int index = 0;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	key_copy = strdup(key);
	if (!key_copy)
	{
		free(new_node);
		return (0);
	}

	value_copy = strdup(value);
	if (!value_copy)
	{
		free(key_copy);
		free(new_node);
		return (0);
	}

	new_node->key = key_copy;
	new_node->value = value_copy;

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		new_node->next = NULL;
	else
		new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
 * hash_table_set - updates value if key exists and
 * adds element to hash table if not
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *key_node = NULL;
	char *value_copy;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	key_node = ht->array[index];
	while (key_node && (strcmp(key, key_node->key) != 0))
		key_node = key_node->next;
	if (key_node != NULL)
	{
		value_copy = strdup(value);
		if (!value_copy)
			return (0);
		if (key_node->value)
			free(key_node->value);
		key_node->value = value_copy;
		return (1);
	}

	return (create_node(ht, key, value));
}

