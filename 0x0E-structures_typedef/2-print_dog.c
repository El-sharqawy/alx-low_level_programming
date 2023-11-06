#include "dog.h"

/**
 * print_dog - print a struct dog data.
 * @d: input struct.
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			name = "nil";
		if (d->owner == NULL)
			owner = "nil";
		printf("Name: %s\n", d->name);
		printf("Age: %d\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
