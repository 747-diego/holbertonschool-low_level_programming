#include "dog.h"


/**
* init_dog - a function that initialize a variable of type struct dog
* @d: pointer to our dog structure
* @name: name of dog
* @age: age of dog
* @owner: name of the dogs owner
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
		d->name = name;
		d->age = age;
		d->owner = owner;
}


/**
* print_dog - a function that prints a struct dog
* @d: pointer to our dog structure
* Return: void
*/

void print_dog(struct dog *d)
{

	init_dog(d, "Django", 3.5, "Jay");

	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %1.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	else
		printf("Owner: %s\n", d->owner);

}
