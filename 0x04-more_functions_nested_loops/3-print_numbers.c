#include "holberton.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: numbers being printed
 */
void print_numbers(void)
{
	int result;

	for (result = 48; result <= 57; result++)
	{
		_putchar(result);
	}
	_putchar('\n');
}
