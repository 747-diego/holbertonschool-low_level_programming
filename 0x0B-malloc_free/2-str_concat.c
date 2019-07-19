#include "holberton.h"

/**
* str_concat - a function that concatenates two strings
* @s1: first string
* @s2: second string
* Return: ptr to contents of s1, followed by the contents of s2
*/

char *str_concat(char *s1, char *s2)
{
	int length1;
	int length2;
	char *toMemory;
	int iterate1;
	int iterate2;

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

	toMemory = malloc(sizeof(char) * length1 + length2 + 1);
	if (toMemory == NULL)
		return (NULL);

	for (iterate1 = 0; iterate1 < length1; iterate1++)

	{
		toMemory[iterate1] = s1[iterate1];
	}

	for (iterate2 = 0; iterate2 < length2; iterate1++, iterate2++)

	{
		toMemory[iterate1] = s2[iterate2];
	}

	toMemory[iterate1] = '\0';
	return (toMemory);
}
