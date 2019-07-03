#include "holberton.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: my target
 * @src: whats being copied
 * Return: *dest
 */


char *_strcpy(char *dest, char *src)


{

	int stringIteration;


	for (stringIteration = 0; src[stringIteration] != 0; stringIteration++)

	{
		dest[stringIteration] = src[stringIteration];
	}


	dest[stringIteration] = '\0';

	return (dest);
}
