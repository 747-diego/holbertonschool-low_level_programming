#include "holberton.h"

/**
* print_alphabet - function displays the alphabet in lowercase using putchar
*
* Return: 0
*/

void print_alphabet(void)
{
	char displayAlphabet;

	for (displayAlphabet = 'a'; displayAlphabet <= 'z'; displayAlphabet++)
	{
		_putchar(displayAlphabet);
	}

	_putchar('\n');
}
