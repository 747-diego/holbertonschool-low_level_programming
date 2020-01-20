#include "hash_tables.h"
/**
 * hash_table_print - A function that prints a hash table.
 * @ht: is the hash table
 * Return: if ht is NULL, dont print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	char *KeyIndex, *ValueIndex;
	unsigned int Head = 1;
	unsigned long int iteration = 0;
	hash_node_t *NextNode;

	if (ht)
	{
		putchar('{');
		while (iteration < ht->size)
		{
			if (ht->array[iteration] == NULL)
            iteration++;
			else
			{
				if (Head == 1)
				{
					printf("'%s': '%s'", ht->array[iteration]->key,
                     ht->array[iteration]->value);
					Head = 0;
				}
				else
				{
					KeyIndex = ht->array[iteration]->key;
					ValueIndex = ht->array[iteration]->value;
					printf(", '%s': '%s'", KeyIndex, ValueIndex);
					NextNode = ht->array[iteration] = ht->array[iteration]->next;
					while (NextNode)
					{
						printf(", '%s': '%s'", KeyIndex, ValueIndex);
						ht->array[iteration] = ht->array[iteration]->next;
					}
				}
			iteration++;
			}
		}
		putchar('}');
		putchar('\n');
	}
}
