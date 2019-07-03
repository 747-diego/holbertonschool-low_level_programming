#include "holberton.h"

/**
* print_rev - function that prints a string, in reverse, followed by a new line
* @s: name of array
* Return: Void
*/


void print_rev(char *s)

{
	int iterate = 0;
	int length = 0;

	while (s[length] != '\0')

	{
		length++;
	}

	for (iterate = length - 1; iterate >= 0; iterate--)

	{
		_putchar(s[iterate]);
	}

	_putchar('\n');
}
