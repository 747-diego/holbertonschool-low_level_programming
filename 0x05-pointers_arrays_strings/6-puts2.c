#include "holberton.h"


/**
 * puts2 - function that prints one char out of 2 of a string
 * @str: prints the one character out of two, starting with the first one
 * Return: Void
 */

void puts2(char *str)
{

	char evenNumbers;
	int stringOfNumbers;


	for (stringOfNumbers = 0; str[stringOfNumbers] != 0; stringOfNumbers++)

	{

		if (stringOfNumbers % 2 == 0)

		{
			evenNumbers = str[stringOfNumbers];
			_putchar(evenNumbers);
		}
	}

	_putchar('\n');
}
