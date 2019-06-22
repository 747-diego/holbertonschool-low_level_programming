#include <stdio.h>

/**
* main - main function prints numbers from 00 to 99
*
* Return: 0
*/


int main(void)
{
	int tens;
	int ones;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
		putchar (tens);
		putchar (ones);
			if (ones < '9' || tens < '9')
			{
			putchar (',');
			putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
