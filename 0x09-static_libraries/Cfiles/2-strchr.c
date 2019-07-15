#include "holberton.h"


/**
 * _strchr - a function that locates a character in a string.
 * @s: the string
 * @c: character
 * Return: a pointer to the first occurrence or NULL
 */


char *_strchr(char *s, char c)


{

	unsigned int iterate;


	for (iterate = 0; s[iterate] >= '\0'; iterate++)

	{

		if (s[iterate] == c)

		{
			return (&s[iterate]);
		}
	}

	return ('\0');
}

