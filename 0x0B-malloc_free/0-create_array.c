#include "holberton.h"

/**
* create_array - function that creates an array of chars
* @size: size of arrary
* @c: strings
* Return: NULL if size = 0, else a pointer to the array
*/

char *create_array(unsigned int size, char c)
{

	char *Achars;
	unsigned int iterate;


	if (size == 0)

	{
		return (NULL);
	}


	Achars = malloc(size * sizeof(c));


	for (iterate = 0; iterate < size; iterate++)

	{
		Achars[iterate] = c;
	}


	Achars[iterate] = '\0';
	return (Achars);
}

