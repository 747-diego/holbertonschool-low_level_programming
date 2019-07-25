#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to a function that takes an int
 * Return: 0 if array is NULL and -1 if size is less than zero and i if true
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int iterate;

	if (array == NULL)
		return (-1);
	if (*cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	iterate = 0;
	while (iterate < size)
	{

		if ((*cmp)(array[iterate]) != 0)
			return (iterate);

	iterate++;
	}

	return (-1);
}
