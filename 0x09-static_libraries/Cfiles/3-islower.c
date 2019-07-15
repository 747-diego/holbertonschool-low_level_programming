#include "holberton.h"

/**
* _islower - main function detects lowercase letters
* @c: checker
* Return: 1 if c is lowers case, otherwise return 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
