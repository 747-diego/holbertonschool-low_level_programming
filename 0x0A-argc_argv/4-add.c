#include "holberton.h"

/**
* main - a program that adds all arguments it receives
* @argc: represent the number of arguments entered in the command line
* @argv: an array that holds string values of whats entered in the command line
* Return: zero
*/


int main(int argc, char *argv[])

{

        int iterate;
        int sum = 1;

        if (argc <= 2)

        {
                printf("Error\n");
                return (1);
        }

        else

        {
                for (iterate = 1; iterate < argc; iterate++)

                {
                        sum += atoi(argv[iterate]);
                }
        }

        printf("%d\n", sum);
        return (0);
}

