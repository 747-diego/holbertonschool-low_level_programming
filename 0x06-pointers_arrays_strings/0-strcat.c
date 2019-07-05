#include "holberton.h"

/**
* *_strcat - a function that concatenates two strings
* @src: the original string
* @dest: the new string
* Return: pointer to dest
*/

char *_strcat(char *dest, char *src)

{
	long int destLength = 0;
	long int srcLength = 0;

	while (dest[destLength] != '\0')

	{
		destLength++;
	}

	while (src[srcLength] != '\0')

	{
		dest[srcLength + destLength] = src[srcLength];
		srcLength++;
		dest[srcLength + destLength] = '\0';
	}

	return (dest);
}
