#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of array.
 * Return: pointer to the newly created hash table,
 * If something went wrong, return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *NewTable = malloc(sizeof(hash_table_t));
	unsigned long int ptrNULL = 0;

	if (size == 0)
		return (NULL);
	if (NewTable == NULL)
		return (NULL);

	NewTable->size = size;
	NewTable->array = malloc(sizeof(hash_node_t *) * size);

	if (NewTable->array == NULL)
	{
		free(NewTable);
		return (NULL);
	}

	while (ptrNULL < size)
	{
		NewTable->array[ptrNULL] = NULL;
		ptrNULL++;
	}

	return (NewTable);
}
