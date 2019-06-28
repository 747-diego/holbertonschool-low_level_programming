#include "holberton.h"

/**
 * main - a function that prints the numbers from 1 to 100 with FIZZ and BUZZ replacing multiples of three and five
 * Return: THE AWESOME FIZZ BUZZ INTERVIEW QUESTION
 */


int main(void)
{
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)

	{

		if (numbers % 15 == 0)

		{
			printf("FizzBuzz");
		}

		else if (numbers % 3 == 0)

		{
			printf("Fizz");
		}

		else if (numbers % 5 == 0)

		{
			printf("Buzz");
		}

		else

		{
			printf("%i", numbers);
		}

		if (numbers < 100)

		{
			printf(" ");
		}

	}

	printf("\n");
	return (0);
}
