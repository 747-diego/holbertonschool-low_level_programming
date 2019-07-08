#include "holberton.h"

/**
* *string_toupper -  a function that changes all lowercase letters of a string to uppercase
* @*upper: pointer to a char
* Return: 0
*/

char *string_toupper(char *upper)
{
	int iterate;

	while (upper[iterate] != '\0')

	{
		if (upper[iterate] >= 'a' && upper[iterate] <= 'z')

		{
			upper[iterate] = upper[iterate - 32];
		}

		iterate++;
	}

	return (upper);
}
