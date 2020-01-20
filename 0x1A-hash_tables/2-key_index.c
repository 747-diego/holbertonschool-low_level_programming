#include "hash_tables.h"
/**
 * key_index - A function that gives you the index of a key.
 * @key: key
 * @size: is the size of the array of the hash table
 * Return: stored index in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djbHash;

	djbHash = hash_djb2(key);
	return (djbHash % size);
}
