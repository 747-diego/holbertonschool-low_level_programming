#include "hash_tables.h"
/**
 * hash_table_set - A function that adds an element to the hash table.
 * @ht: hash table you want to add
 * @key: key cant not be empty
 * @value: value associated with key, must be duplicated
 * Return: 1 for success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *NewElement;
	hash_node_t *CopyElement;
	unsigned long int KeyIndex = 0;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	NewElement = malloc(sizeof(hash_node_t));
	if (NewElement == NULL)
		return (0);

	CopyElement = ht->array[KeyIndex];

	for (; CopyElement; CopyElement = CopyElement->next)
	{
		if (strcmp(CopyElement->key, key) == 0)
		{
			free(CopyElement->value);
			free(NewElement);
			CopyElement->value = strdup(value);
			return (1);
		}
	}


	KeyIndex = key_index((const unsigned char *)key, ht->size);
	NewElement->key = strdup(key);
	NewElement->value = strdup(value);
	NewElement->next = ht->array[KeyIndex];
	ht->array[KeyIndex] = NewElement;

	return (1);
}
