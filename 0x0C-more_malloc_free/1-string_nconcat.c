#include "holberton.h"

/**
* string_nconcat - function that concatenates two strings
* @s1: first string
* @s2: second string
* @n: memory being allocated
* Return: ptr to new allocated space, else NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2;
	char *toMemory;
	unsigned int iterate1, iterate2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (s1[length1] != '\0')
		length1++;

	length2 = 0;
	while (s2[length2] != '\0')
		length2++;

	/* We found the length of both strings, we now need to */
	/* set memory space for each character to fit, aswell as the NULL byte */
	toMemory = malloc(sizeof(char) * length1 + length2 + 1);
	/* we allocated our pointer toMemory and added one extra space */
	/* to account for the NULL byte at the end, we now need to check */
	/* for a fail case */
	if (toMemory == NULL)
		return (NULL);
	/* We now need to attach both strings together by having our pointer */
	/* iterate through the first string and have it pointing to the begining */
	/* of the second string */
	if (n >= length2)
		n = length2;
	/* setting the length of s2 equal to n */

	for (iterate1 = 0; iterate1 < length1; iterate1++)
		toMemory[iterate1] = s1[iterate1];

	for (iterate2 = 0; iterate2 < n; iterate1++, iterate2++)
		toMemory[iterate1] = s2[iterate2];

	return (toMemory);
}
