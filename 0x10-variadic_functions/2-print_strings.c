#include "variadic_functions.h"

/**
* print_strings -  a function that prints strings, followed by a new line
* @separator: s the string to be printed between the strings
* @n: is the number of strings passed to the function
* @...: the string being passed through
*/


void print_strings(const char *separator, const unsigned int n, ...)
{

	char *pointerCH;
	unsigned int iterate;
	va_list vl; /* variadic list variables */

	va_start(vl, n); /* initialize and use variables */

	for (iterate = 0; iterate < n; iterate++)

	{

		pointerCH = va_arg(vl, char*);
		if (pointerCH == NULL)
			printf("(nil)");

		printf("%s", pointerCH);

		if (iterate != n - 1 && separator)
			printf("%s", separator);
	}

	va_end(vl); /*  free up any recources in the process */
	printf("\n");
}
