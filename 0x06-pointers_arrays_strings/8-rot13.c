#include "holberton.h"


/**
 * rot13 - a function that encodes a string using rot13
 * @s: string being encoded
 * Return: pointer
 */

char *rot13(char *s)

{
	int iterate = 0;


	while (s[iterate] != '\0')

	{

		if ((s[iterate] >= 'a' && s[iterate] <= 'm') || (s[iterate] >= 'A' && s[iterate] <= 'M'))

		{
			s[iterate] = (s[iterate] + 13);
		}

		else


			while ((s[iterate] >= 'n' && s[iterate] <= 'z') || (s[iterate] >= 'N' && s[iterate] <= 'Z'))

			{
				s[iterate] = (s[iterate] - 13);
			}


		iterate++;
	}

	return (s);
}
