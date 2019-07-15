#include "holberton.h"


/**
 * _strstr - function that locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring
 */


char *_strstr(char *haystack, char *needle)

{


	while (*haystack != '\0')

	{

		char *iterationONE = haystack;
		char *iterationTWO = needle;


		while (*iterationTWO == *haystack && *iterationTWO != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			iterationTWO++;
		}


		if (*iterationTWO == '\0')

		{
			return (iterationONE);
		}

		haystack = iterationONE + 1;

	}

	return ('\0');
}
