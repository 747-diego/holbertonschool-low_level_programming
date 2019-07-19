#include "holberton.h"

/**
* array_range - a function that creates an array of integers
* @max: biggest integer
* @min: smallest integer
* Return: the pointer to memory
*/


int *array_range(int min, int max)
{

	int *toMemory;
	int iterate;
	int difference;

	if (min > max)
		return (NULL);

	difference = max - min;
	/* To find the length of the array, I must find the difference */
	/* between the Max number and Min Number. I do the by subtracting */

	toMemory = malloc(sizeof(int) * difference + 1);
	/* Now I allocated memory for length of the array which is */
	/* equal to the difference of Max and Min */

	for (iterate = 0; min + iterate <= max; iterate++)
		toMemory[iterate] = min + iterate;
	/* Now that the memory is allocated I now need to set the pointer */
	/* to each number and iterate through to print each integer */

	return (toMemory);
}
