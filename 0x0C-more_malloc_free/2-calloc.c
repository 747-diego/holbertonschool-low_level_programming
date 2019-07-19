#include "holberton.h"

/**
* @nmemb: number of elemnents to be allocated
* @size: the size of elements
* Return: pointer to the allocated memory, or NULL if the request fails
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{

	int *toMemory;
	unsigned int iterate;

	if (nmemb == 0 || size == 0)
		return (NULL);

	toMemory = malloc(sizeof(int) * nmemb);
	if (toMemory == NULL)
		return (NULL);

	for (iterate = 0; iterate < nmemb; iterate++)

	{
		toMemory[iterate] = 0;
	}

	return (toMemory);
}
