#include "holberton.h"

/**
* print_triangle - a function that prints a triangle, followed by a new line.
* @size: size is the size of the triangle
* Return: Void
*/


void print_triangle(int size)
{

	int blankSpaces;
	int rows;
	int hashtags;

	if (size <= 0)

	{
		_putchar('\n');
	}

	else if (size >= 0)

	{
		for (rows = 0; rows < size; rows++)

		{

			for (blankSpaces = 1; blankSpaces < (size - rows); blankSpaces++)

			{
				_putchar(' ');
			}

			for (hashtags = blankSpaces; hashtags <= size; hashtags++)

			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
