#include <stdio.h>

/**
* main - main function for printing the alphabet
*
* Return: zerp
*/


	int main(void)
{

	char a;

	a = 'a';

	while (a <= 'z')
	{
	putchar(a);
	a++;
	}

	putchar('\n');
	return (0);
}
