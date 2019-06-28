#include "holberton.h"


/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14, followed by a new line
 *
 * Return: Void
 */


void more_numbers(void)
{


	int rows;
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)

	{

		for (rows = 0; rows <= 14; rows++)

		{

			if (rows >= 10)

			{
				_putchar(rows / 10 + '0');
			}

			_putchar(rows % 10 + '0');
		}

		_putchar('\n');
	}
}
