#include "holberton.h"


/**
 * cap_string - function that capitalizes all words of a string
 * @ptr: pointer argumnet
 * Return: pointer
 */

char *cap_string(char *ptr)
{
	int iterate = 0;


	while (ptr[iterate] != '\0')

	{

		if (iterate == 0 && ptr[iterate] >= 97 && ptr[iterate] <= 122)

		{
			ptr[iterate] = ptr[iterate] - 32;

		}

		if (ptr[iterate] >= 97 && ptr[iterate] <= 12

	&& (ptr[iterate - 1] == 32 || ptr[iterate - 1] == ','
	|| ptr[iterate - 1] == ';' || ptr[iterate - 1] == ','
	|| ptr[iterate - 1] == '!' || ptr[iterate - 1] == '?'
	|| ptr[iterate - 1] == '"' || ptr[iterate - 1] == '('
	|| ptr[iterate - 1] == ')' || ptr[iterate - 1] == '{'
	|| ptr[iterate - 1] == '}' || ptr[iterate - 1] == '\n'
	|| ptr[iterate - 1] == '\t'))

		{
			ptr[iterate] = ptr[iterate] - 32;
		}

			iterate++;
	}

	return (ptr);
}
