#include "holberton.h"

/**
* print_last_digit - prints the last digit of a number
* @value: the last digit of a numer
* Return: the value of the last digit
*/

int print_last_digit(int value)
{
	int digit;

	digit = value % 10;

	if (value < 0)

	{
		digit = digit * -1;
	}

	_putchar (digit + '0');
	return (digit);
}
