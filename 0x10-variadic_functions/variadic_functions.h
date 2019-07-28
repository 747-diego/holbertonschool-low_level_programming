#ifndef HEADER_FILE
#define HEADER_FILE

/* Header Files */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/* Structures */


/* Typedef Struct */

/* Prototypes below */
int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
