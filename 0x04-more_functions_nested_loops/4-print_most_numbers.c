#include "holberton.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: void
 */


void print_most_numbers(void)
{
	int result;

	for (result = 48; result <= 57; result++)
	{
		if (result != 50 && result != 52)
		{
			_putchar(result);
		}
	}
	_putchar('\n');
}
