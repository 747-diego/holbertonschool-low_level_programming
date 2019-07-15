#include "holberton.h"

/**
 * _isupper - main function detects uppercase letters
 * @c: checker
 *
 * Return: 1 if c is upper, otherwise 0
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

	{
		return (1);
	}

	else

	{
		return (0);
	}
}
