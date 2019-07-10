#include "holberton.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: string
 * @accept: bytes in string
 * Return: pointer to bytes
 */


char *_strpbrk(char *s, char *accept)

{


	int iterateONE;
	int iterateTWO;

	for (iterateONE = 0; s[iterateONE] != '\0'; iterateONE++)

	{
		for (iterateTWO = 0; accept[iterateTWO] != '\0'; iterateTWO++)

		{
			if (accept[iterateTWO] == s[iterateONE])

			{
				return (&s[iterateONE]);
			}
		}
	}

	return (0);
}
