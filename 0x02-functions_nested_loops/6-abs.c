#include "holberton.h"

/**
* _abs - function that computes the absolute value of an integer
* @int: - value of integer
* Return: 0
*/

int _abs(int value)
{

	if (value < 0)

	{
		return (value * -1);
	}

	else if (value > 0)

	{
		return (1);
	}

	else

	{
		return (0);
	}
}
