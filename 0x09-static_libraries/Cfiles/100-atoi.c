#include "holberton.h"


/**
 * _atoi - a function that convert a string to an integer
 * @s: pointer to string thats being converted
 * Return: integers
 */


int _atoi(char *s)

{
	int num;
	int iteration;
	int negativeNum = 1;


	iteration = num = 0;

	while ((s[iteration] < '0' || s[iteration] > '9') && s[iteration] != 0)
	{
		if (s[iteration] == '-')
			negativeNum = negativeNum * -1;
		iteration++;
	}
	while ((s[iteration] >= '0' && s[iteration] <= '9') && s[iteration] != 0)
	{
		if (num >= 0)
		{
			num = num * 10 - (s[iteration] - '0');
			iteration++;
		}
		else
		{
			num = num * 10 - (s[iteration] - '0');
			iteration++;
		}
	}
	negativeNum = negativeNum * -1;
	return (num * negativeNum);
}
