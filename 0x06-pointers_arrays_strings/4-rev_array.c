#include "holberton.h"

/**
* reverse_array - a function that reverses the content of an array of integers
* @a: an arrary of integers
* @n: number of elements to swap
*/


void reverse_array(int *a, int n)
{
	int length;
	int iterate;
	int counter;

	counter = n - 1;

	for (length = 0; a[length] != '\0'; length++)

	{
		counter++;
	}

	for (iterate = 0; iterate < counter / 2; iterate++)

	{
		n  = a[iterate];
		a[iterate] = a[counter - iterate];
		a[counter - iterate] = n;
	}
}
