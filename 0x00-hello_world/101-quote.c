#include <stdio.h>
#include <unistd.h>

/**
 * main - main function to print string without using puts or printf
 *
 * Return: one
 */


int main(void)
{

	int q;

	q = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19");

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", q);
	return (1);
}
