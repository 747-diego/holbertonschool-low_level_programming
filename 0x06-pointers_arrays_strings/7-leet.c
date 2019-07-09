#include "holberton.h"


/**
 * *leet - a function that encodes a string into 1337
 * @ptr: pointer
 * Return: ptr
*/

char *leet(char *ptr)

{


	int iterateS1;
	int iterateS2;
	int placeholder;
	char letters[] = "oOlLeEaAtT";
	char numbers[] = "0011334477";

	iterateS1 = 0;

	while (ptr[iterateS1] != '\0')

	{
		iterateS2 = 0;
		placeholder = 0;

		while (letters[iterateS2] != '\0')

		{

			if (ptr[iterateS1] == letters[iterateS2])

			{
				placeholder = iterateS2;
				ptr[iterateS1] = numbers[placeholder];
			}

			iterateS2++;
		}

		iterateS1++;
	}

	return (ptr);
}
