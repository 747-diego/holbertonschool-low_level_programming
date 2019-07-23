#include "dog.h"

/**
* init_dog - a function that initialize a variable of type struct dog
* @d: pointer to structure
* @name: name of dog
* @age: age of dog
* @owner: name of the dogs owner
* Return: void
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)
		d->name = name;
		d->age = age;
		d->owner = owner;

}
