#include "holberton.h"

/**
* *string_toupper - function changes all lowercase letters to uppercase
* @upper: pointer to a char
* Return: 0
*/

char *string_toupper(char *upper)

{

	int iterate;

	for (iterate = 0; upper[iterate] != '\0'; iterate++)

	{

		if (upper[iterate] >= 'a' && upper[iterate] <= 'z')

		{
			upper[iterate] = upper[iterate] - 32;
		}

	}

	return (upper);

}
