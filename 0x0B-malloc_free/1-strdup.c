#include "holberton.h"

/**
* _strdup - function that returns a ptr to a newly allocated space in memory
* @str: original string
* Return: pointer to duplicated string
*/

char *_strdup(char *str)
{

	char *originalString;
	unsigned int length;
	unsigned int NewStrLength;


	if (str == NULL)

	{
		return (NULL);
	}


	for (length = 0; str[length] != '\0'; length++)

	{
		/* finding the length of the original string*/
		;
	}


	originalString = malloc(length * sizeof(str + 1));


	if (originalString == NULL)

	{
		return (NULL);
	}

		NewStrLength = 0;
		while (NewStrLength < length)

		{
			originalString[NewStrLength] = str[NewStrLength];
			NewStrLength++;
		}

		return (originalString);
}



