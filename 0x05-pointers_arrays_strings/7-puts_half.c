#include "holberton.h"


/**
 * puts_half - a function should print the second half of the string
 * @str: the string thats being printed
 * Return: Void
 */


void puts_half(char *str)
{

	char halfPrinted;
	int string;
	int length;

	for (length = 0; str[length] != 0; length++)
	;

	string = (length + 1) / 2;

	for (; str[string] != 0; string++)

	{
		halfPrinted = str[string];
		_putchar(halfPrinted);
	}

	_putchar('\n');
}
