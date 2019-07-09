#include "holberton.h"


/**
 * rot13 - a function that encodes a string using rot13
 * @s: string being encoded
 * Return: pointer
 */

char *rot13(char *ptr)

{
	int iterate = 0;


	while (ptr[iterate] != '\0')

	{

		if ((ptr[iterate] >= 'a' && ptr[iterate] <= 'm') ||
		(ptr[iterate] >= 'A' && ptr[iterate] <= 'M'))

		{
			ptr[iterate] = (ptr[iterate] + 13);
		}

		else


			while ((ptr[iterate] >= 'n' && ptr[iterate] <= 'z') ||
			 (ptr[iterate] >= 'N' && ptr[iterate] <= 'Z'))

			{
				ptr[iterate] = (ptr[iterate] - 13);
			}


		iterate++;
	}

	return (ptr);
}
