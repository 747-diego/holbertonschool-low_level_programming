#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *CurrentNode;
    hash_node_t *NextNode;
    hash_node_t **Array;
    unsigned int long TableSize = 0;
    unsigned int long index = 0;

    TableSize = ht->size;
	while (index < TableSize)
	{
        Array = ht->array;
		if (Array[index])
		{
			CurrentNode = Array[index];
			while (CurrentNode)
			{
				NextNode = CurrentNode->next;
				free(CurrentNode->key);
				free(CurrentNode->value);
				free(CurrentNode);
				CurrentNode = NextNode;
			}
		}
		index++;
	}
	free(Array);
	free(ht);
}
