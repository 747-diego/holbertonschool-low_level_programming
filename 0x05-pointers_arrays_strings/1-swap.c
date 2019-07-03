y#include <stdio.h>

/**
* swap_int - a function that swaps the values of two integers
* @a: holds the value b
* @b: holds the value a
* Return: 0
*/


void swap_int(int *a, int *b)

{
	int swap;

	swap = *a;

	*a = *b;
	*b = swap;
}
