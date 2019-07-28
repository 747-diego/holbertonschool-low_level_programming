#include "variadic_functions.h"

/**
* sum_them_all -  a function that returns the sum of all its parameters
* @n: the amount of aguments
* @...: the actual arguments implemented by the user
* Return: the sum of all parameters
*/


int sum_them_all(const unsigned int n, ...)
{

	int total = 0;
	unsigned int iterate;
	va_list vl; /* variadic list variable */

	if (n == 0)
		return (0);

	va_start(vl, n); /* initialize and use variable list */

	for (iterate = 0; iterate < n; iterate++)
		total += va_arg(vl, int);


	va_end(vl);  /*  free up any recources in the process */
	return (total);

}

