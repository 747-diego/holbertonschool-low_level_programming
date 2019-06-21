#include <stdio.h>

/**
* main - main function to print the alphabet without e and q
*
* Return: 0
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)

	{
	if (a != 'q' && a != 'e')
	putchar (a);
	}

	putchar ('\n');
	return (0);
}
