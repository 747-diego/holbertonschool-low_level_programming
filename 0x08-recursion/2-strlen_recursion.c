#include "holberton.h"

/**
* _strlen_recursion - a function that returns the length of a string
* @s: pointer to string
* Return: 0
*/


int _strlen_recursion(char *s)
{

	if (*s == '\0')

	{
		return (0);
	}

	else

	{
		s++;
		return (1 + _strlen_recursion(s));
	}

}
