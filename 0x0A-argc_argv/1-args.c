#include "holberton.h"

/**
* main - a program that prints the number of arguments passed into it
* @argc: represent the number of arguments entered in the command line
* @argv: unused
* Return: zero
*/

int main(int argc, char __attribute__((__unused__)) *argv[])

{
	printf("%d\n", argc - 1);
	return (0);
}
