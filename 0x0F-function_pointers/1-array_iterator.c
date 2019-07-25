#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * @size: arrays size
 * @array: the array
 * @action: our function pointer
 * Return: VOID
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{

	executer = action;
	iterate = 0;

	while (iterate < size)

	{
		executer(array[iterate]);
		iterate++;
	}
}

