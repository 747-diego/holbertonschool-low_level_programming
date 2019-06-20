#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - main function to print the last digit of a number
*
* Return: 0
*/

int main(void)
{
	int n;
	int last;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */


	if (last > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last % 10);
	}

	else if (last == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last % 10);
	}

	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last % 10);
	}
	return (0);
}

