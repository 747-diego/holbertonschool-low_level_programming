#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: begining of array
 * @size: size of array
 * @value: what we're searching for
 * Return: values location otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	/* Checking if array is empty */
	if (array == NULL)
		return (-1);

	index = 0;
	while ( index < size )
	{
		printf("Value checked array[%zu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
        index++;
	}
	return (-1);
}
