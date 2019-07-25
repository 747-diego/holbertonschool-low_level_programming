#include "function_pointers.h"


/**
 * print_name - a function that prints a name
 * @name: pointer to name of string
 * @f: our function pointer
 * Return: VOID
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)

	{
		(*f)(name);
	}
}
