#include "holberton.h"

/**
* print_to_98 - function that prints all natural  numbers
* @n: numbers being printed
* Return: void
*/



void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}

	else if (n < 98)
	{

		for (; n <= 98; n++)

		{

			printf("%d", n);

				if (n != 98)
				{
					printf(", ");
				}

		}

	}

	else
	{

		for (; n >= 98; n--)

		{

		printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
}
