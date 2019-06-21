#include <stdio.h>

/**
* main - main function displays numbers 0 through nine without printf
*
* Return: 0
*/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	putchar (num);

	putchar ('\n');
	return (0);
}
