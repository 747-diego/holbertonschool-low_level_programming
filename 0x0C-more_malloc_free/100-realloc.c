#include "holberton.h"




void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *toMemory;
	unsigned int iterate;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	toMemory = malloc(new_size);
	if (toMemory == NULL)
		return (NULL);

	for (iterate = 0; iterate < old_size && iterate < new_size; iterate++)

	{
		toMemory[iterate] = ((char *)ptr)[iterate];
	}

	free(ptr);
	return (toMemory);
}
