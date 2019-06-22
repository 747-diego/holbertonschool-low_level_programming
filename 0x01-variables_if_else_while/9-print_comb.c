#include <stdio.h>

/**
* main - main function ...
*
* Return: 0
*/

int main(void)
{
	int comma;

	for (comma = '0'; comma <= '9'; comma++)
	{
	putchar (comma);
	if (comma < '9')

	{
	putchar (',');
	putchar (' ');
	}
	}
	putchar ('\n');
	return (0);
}

