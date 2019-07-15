#include "holberton.h"

/**
* main - a program that prints all arguments it receives
* @argc: represent the number of arguments entered in the command line
* @argv: an array that holds string values of whats entered in the command line
* Return: zero
*/

int main(int argc, char *argv[])

{
	int iterate;

	if (argc)

	{

		for (iterate = 0; iterate < argc; iterate++)

		{
			printf("%s\n", argv[iterate]);
		}
	}
	return (0);
}
