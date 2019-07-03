#include "holberton.h"

/**
* rev_string -  a function that reverses a string
* @s: name of array
* Return: 0
*/

void rev_string(char *s)


{
	int index;
	int counter;
	int loop;
	int temp;

	counter = -1;


	for (length = 0; s[length] != '\0'; length++)

	{
		counter += 1;
	}

	for (loop = 0; loop <= counter / 2; loop++)

	{
		temp = s[loop];
		s[loop] = s[counter - loop];
		s[counter - loop] = temp;
	}

}

