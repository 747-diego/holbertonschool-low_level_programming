#include "holberton.h"


/**
 * cap_string - function that capitalizes all words of a string
 * @p: pointer argumnet
 * Return: pointer
 */

char *cap_string(char *p)
{
	int iterate = 0;


	while (p[iterate] != '\0')

	{

	if (iterate == 0 && p[iterate] >= 97 && p[iterate] <= 122)

		{
			p[iterate] = p[iterate] - 32;

		}

	if (p[iterate] >= 97 && p[iterate] <= 12
	&& (p[iterate - 1] == 32 || p[iterate - 1] == ','
	|| p[iterate - 1] == ';'|| p[iterate - 1] == ','
	|| p[iterate - 1] == '!'|| p[iterate - 1] == '?'
	|| p[iterate - 1] == '"'|| p[iterate - 1] == '('
	|| p[iterate - 1] == ')'|| p[iterate - 1] == '{'
	|| p[iterate - 1] == '}'|| p[iterate - 1] == '\n'
	|| p[iterate - 1] == '\t'))

		{
			p[iterate] = p[iterate] - 32;
		}

			iterate++;
	}

	return(p);
}
