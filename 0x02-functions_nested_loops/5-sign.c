#include "holberton.h"

/**
*  print_sign - function displays the sign of a number
* @n: the number being converted
* Return: 1 if grearer than 0, 0 if n is o, -1 if n is negative
*/

int print_sign(int n)
{
	if (n > 0)

	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)

	{
		_putchar('0');
		return (0);
	}

	else

	{
		_putchar('-');
		return (-1);
	}
}
