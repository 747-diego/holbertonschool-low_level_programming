#include "holberton.h"

/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: array
 * Description: function that prints the chessboard.
 * Return: a[i][j])i
 */

void print_chessboard(char (*a)[8])

{

	int white;
	int black;

	for (white = 0; white < 8; white++)

	{

		for (black = 0; black < 8; black++)

		{
			_putchar(a[white][black]);
		}

		_putchar('\n');
	}
}

