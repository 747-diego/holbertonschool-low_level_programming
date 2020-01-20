#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table
 * @ht: address of hash table
 * @key: key string, can't be empty
 * @value: value associated with key, can be empty
 *
 * Return: 1 for success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *NewElement;
	unsigned long int KeyIndex;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	NewElement = malloc(sizeof(hash_node_t));
	if (NewElement == NULL)
		return (0);

	KeyIndex = key_index((const unsigned char *)key, ht->size);
	NewElement->key = strdup(key);
	NewElement->value = strdup(value);
	NewElement->next = ht->array[KeyIndex];
	ht->array[KeyIndex] = NewElement;

	return (1);
}
