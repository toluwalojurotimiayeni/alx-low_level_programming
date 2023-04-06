#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key
 * @key: This is the key
 * @size: This is the size of hash table array
 * Return: The index where key/value pair is stored in hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
