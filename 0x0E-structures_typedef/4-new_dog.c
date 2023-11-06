#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: an input name.
 * @age: an input age.
 * @owner: an input owner.
 * Return: a pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));
	if (newDog != NULL)
	{
		newDog->name = strdup(name);
		newDog->age = age;
		newDog->owner = strdup(owner);
		if (newDog->name == NULL || newDog->owner == NULL)
		{
			free(newDog);
			free(newDog->name);
			free(newDog->owner);
			return (NULL);
		}
	}
	return (newDog);
}
