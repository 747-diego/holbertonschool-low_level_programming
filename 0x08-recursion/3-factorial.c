#include "holberton.h"

/**
* factorial - a function that returns the factorial of a given number
* @n: number
* Return: -1 if n is < 0, else return 1
*/


int factorial(int n)

{

	if (n < 0)

	{
		return (-1);
	}

	else if (n == 0)

	{
		return (1);
	}

	return (n * factorial(n - 1));
}
