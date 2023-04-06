#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key
 * @ht: This is the hash table you want to look into
 * @key: This is the key you are looking for
 * Return: The value associated with the element, or NULL if
 * key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	/* find index in hash table where key is */
	/* look through linked list to find matching key for value */

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);

	tmp = (ht->array)[idx];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	else
		return (tmp->value);
}
