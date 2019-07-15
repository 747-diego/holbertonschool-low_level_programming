#include "holberton.h"


/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointer to string
 * @accept: string of bytes
 * Return: the number of bytes
 */


unsigned int _strspn(char *s, char *accept)

{

	unsigned int iterateONE;
	unsigned int iterateTWO = 0;

	unsigned int numberOfBYTES = 0;

	for (iterateONE = 0; s[iterateONE] > ' '; iterateONE++)

	{

		for (iterateTWO = 0; accept[iterateTWO] != '\0'; iterateTWO++)

		{

			if (accept[iterateTWO] == s[iterateONE])

			{
				numberOfBYTES += 1;

			}
		}
	}

	return (numberOfBYTES);
}
