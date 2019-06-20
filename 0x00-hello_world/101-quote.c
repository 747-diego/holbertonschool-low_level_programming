#include <stdio.h>
#include <unistd.h>

/**
 * main - main function to print string without using puts or printf
 *
 * Return: one
 */


int main(void)
{

  int quote;

    quote = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

  write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", quote);
  return (1);
}
