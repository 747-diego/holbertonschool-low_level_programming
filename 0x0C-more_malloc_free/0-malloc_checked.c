#include "holberton.h"

/**
* malloc_checked - a function that allocates memory using malloc
* @b: the memory being allocated
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{

	unsigned int *toMemory;

	toMemory = malloc(b);

	if (toMemory == NULL)

	{
		exit(98);
	}

	return (toMemory);
}
