#include "holberton.h"

/**
* main - main function displays the alphabet in lowercase using putchar
*
* Return: 0
*/

int main(void)
{
	char displayAlphabet;

	for (displayAlphabet = 'a'; displayAlphabet <= 'z'; displayAlphabet++)
	{
	putchar(displayAlphabet);
	}

	putchar('\n');
	return (0);
}
