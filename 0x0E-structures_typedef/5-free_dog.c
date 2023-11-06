#include "dog.h"

/**
 * free_dog - free dog from memory.
 * @d: an input struct
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
		
	}
}
