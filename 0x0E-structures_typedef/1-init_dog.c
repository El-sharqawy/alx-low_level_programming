#include "dog.h"

/**
 * init_dog - initialize variables for struct dog
 * @d: struct dog
 * @name: an input name for the dog.
 * @age: an input age for the dog.
 * @owner: an input owner name for the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name != NULL)
		d->name = name;
	d->age = age;
	if (owner != NULL)
		d->owner = owner;
}
