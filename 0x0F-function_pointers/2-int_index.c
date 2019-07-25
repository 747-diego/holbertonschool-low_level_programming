#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: our array
 * @size: size of array
 * @cmp: our function pointer
 * Return: 0 if array is NULL and -1 if size is less than zero and i if true
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int iterate;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	iterate = 0;
	while (iterate < size)
	{

		cmp(array[iterate]);
		if ((cmp)(array[iterate]) != 0)
			return (iterate);

	iterate++;
	}

	return (-1);
}
