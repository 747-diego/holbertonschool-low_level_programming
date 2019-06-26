#include "holberton.h"

/**
* print_alphabet_x10 - main function displays the alphabet ten times
* Return: 0
*/

void print_alphabet_x10(void)
{
	char displayAlphabet;
	int displayTenTimes;

	for (displayTenTimes = 0; displayTenTimes <= 9; displayTenTimes++)
	{
		for (displayAlphabet = 'a'; displayAlphabet <= 'z'; displayAlphabet++)
		{
			_putchar (displayAlphabet);
		}

	_putchar ('\n');
	}
}
