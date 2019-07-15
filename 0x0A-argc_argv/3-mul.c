#include "holberton.h"

/**
* main - a program that multiplies two numbers
* @argc: represent the number of arguments entered in the command line
* @argv: an array that holds string values of whats entered in the command line
* Return: one if error, else zero
*/

int main(int argc, char *argv[])

{

	int iterate;
	int multi = 1;

	if (argc <= 2)

	{
		printf("Error\n");
		return (1);
	}

	else

	{
		for (iterate = 1; iterate < argc; iterate++)

		{
			multi *= atoi(argv[iterate]);
		}
	}

	printf("%d\n", multi);
	return (0);
}
