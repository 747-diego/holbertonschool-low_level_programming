#include "holberton.h"

/**
* _isalpha - main function detects for lower and upper case charaters
* @c: - checker
* Return: 1 if c is a lower or uppper case, otherwise return 0
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

