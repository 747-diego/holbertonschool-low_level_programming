#include "holberton.h"


/**
 * _memcpy - a function that copies memory area.
 * @src: the memory im copying
 * @dest: where im copying to
 * @n: number of bytes copied
 * Return: destination
 */


char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int iterate = 0;


	while (iterate < n)

	{
		dest[iterate] = src[iterate];
		iterate++;
	}

	return (dest);
}
