#include "holberton.h"

/**
* *_strncpy - a  function that copies a string
* @src: the original string
* @dest: the concatenated string
* @n: number 0f bytes
* Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)

	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (ptr);
}
