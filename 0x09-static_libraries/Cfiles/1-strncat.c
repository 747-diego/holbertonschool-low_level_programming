#include "holberton.h"

/**
* *_strncat - a function that concatenates two strings
* @src: the original string
* @dest: the concatenated string
* @n: number of bytes
* Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *ptr;
	int destLength;

	while (dest[destLength] != '\0')

	{
		destLength++;
	}


	ptr = dest + destLength;

	while (*src != '\0' && n--)

	{
		*ptr++ = *src++;
		*ptr = '\0';
	}

	return (dest);
}
