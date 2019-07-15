#include "holberton.h"

/**
* _puts - a function that prints a string, followed by a new line, to stdout
* @str: string bring printed
* Return: 0
*/

void _puts(char *str)

{


	int iterate;

	while (str[iterate] != '\0')

	{
		_putchar(str[iterate]);
		iterate++;
	}

	_putchar('\n');

}
