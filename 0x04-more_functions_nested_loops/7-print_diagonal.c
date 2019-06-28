#include "holberton.h"


/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 * Return: void
 */


void print_diagonal(int n)
{


	int slashes, spaces;

	if (n <= 0)

	{
		_putchar('\n');
	}

	for (slashes = 0; slashes < n; slashes++)

	{

		for (spaces = 0; spaces < slashes; spaces++)

		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}

}
