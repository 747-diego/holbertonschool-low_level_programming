#include "variadic_functions.h"

/**
* print_string -  a function that prints numbers, followed by a new line
* @separator: is the string to be printed between numbers
* @n: is the number of integers passed to the function
* @...: the numbers being printed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int iterate;
	va_list vl; /* variadic list variables */

	va_start(vl, n); /* initialize and use variable list */

	for (iterate = 0; iterate < n; iterate++)

	{
		printf("%d", va_arg(vl, int));

		if (iterate < n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(vl); /* free up any rcources in the process */
}
