#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht:  hash table you want to look into
 * @key: the key you are looking for
 * Return: value associated with the key
 * or NULL if key could not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int KeyIndex;
    hash_node_t *HashcodeIndex;

	if (ht == NULL || key == NULL)
		return (NULL);

	KeyIndex = key_index((const unsigned char *)key, ht->size);
	if (ht->array[KeyIndex] == NULL)
		return (NULL);

	/* checks if hashcode matches */
	HashcodeIndex = ht->array[KeyIndex];
	if (strcmp(HashcodeIndex->key, key) == 0)
		return (HashcodeIndex->value);

	else
	{
		/* if hashcode does not match, find one! */
		while (HashcodeIndex != NULL)
		{
			/* once found, spit out value */
			HashcodeIndex = HashcodeIndex->next;
			if (strcmp(HashcodeIndex->key, key) == 0)
				return (HashcodeIndex->value);
		}
	}
	return (NULL);
}
