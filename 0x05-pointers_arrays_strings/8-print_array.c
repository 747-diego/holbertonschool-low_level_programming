#include "holberton.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: my array
 * @n: the number of elements of the array
 * Return: Void
 */


void print_array(int *a, int n)

{

	int arrayIteration;


	for (arrayIteration = 0; arrayIteration < n; arrayIteration++)

	{
		printf("%d", a[arrayIteration]);

		if (arrayIteration != n - 1)

		{
			printf(", ");
		}
	}

	putchar('\n');
}

