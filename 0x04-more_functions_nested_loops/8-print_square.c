#include "holberton.h"


/**
 * print_square -  a function that prints a square, followed by a new line
 * @size: size is the size of the square
 * Return: a square
 */


void print_square(int size)
{

	int rows;
	int hashtag;


	if (size <= 0)

	{
		_putchar('\n');
	}

	else if (size >= 0)

	{

		for (rows = 1; rows <= size; rows++)

		{

			for (hashtag = 1; hashtag <= size; hashtag++)

			{
				_putchar('#');
			}

			_putchar('\n');

		}
	}
}
