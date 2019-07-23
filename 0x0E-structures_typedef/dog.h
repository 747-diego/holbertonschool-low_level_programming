#ifndef HEADER_FILE
#define HEADER_FILE

/* Header Files */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* Structures */

/**
 * struct dog - details on dog tag
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Typedef Struct */
typedef struct dog dog_t;

/* Prototypes below */
int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
