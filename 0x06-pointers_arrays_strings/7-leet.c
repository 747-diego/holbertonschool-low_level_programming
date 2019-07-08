#include "holberton.h"


/**
 * leet - a function that encodes a string into 1337
 * @ptr: pointer
 * Returns: ptr
*/


char *leet(char *ptr)

{

	int iterate;


	for (iterate = 0; ptr[iterate] != '\0'; iterate++)

	{

		if (ptr[iterate] == 'a' || ptr[iterate] == 'A')

		{
			ptr[iterate] = '4';
		}

		else if (ptr[iterate] == 'e' || ptr[iterate] == 'E')

		{
			ptr[iterate] = '3';
		}

		else if (ptr[iterate] == 'o' || ptr[iterate] == 'O')

		{
			ptr[iterate] = '0';
		}

		else if (ptr[iterate] == 't' || ptr[iterate] == 'T')

		{
			ptr[iterate] = '7';
		}

		else if (ptr[iterate] == 'l' || ptr[iterate] == 'L')

		{
			ptr[iterate] = '1';
		}
	}

	return (ptr);
}

