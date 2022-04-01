#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: string used as key for hash table
 * @size: size of array for hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key) % size;

	return (hash);
}

