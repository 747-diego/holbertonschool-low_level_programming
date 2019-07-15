#include "holberton.h"


/**
 *_memset - sets first n bytes of the memory area
 * @s: pointer to memory
 * @b: constant byte
 * @n: the first byte
 * Return: pointer s
 */


char *_memset(char *s, char b, unsigned int n)


{
	unsigned int iterate = 0;


	while (iterate < n)

	{
		s[iterate] = b;
		iterate++;
	}


	return (s);
}

