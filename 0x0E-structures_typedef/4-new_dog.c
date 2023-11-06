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
	struct dog *newDog;
	int i, j, k, h;
	char *newName, *newOwner;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	newName = malloc(sizeof(char) * i + 1);
	if (newName == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newOwner = malloc(sizeof(char) * j + 1);
	if (newOwner == NULL)
	{
		free(newDog);
		free(newName);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		newName[k] = name[k];
	for (h = 0; h <= j; h++)
		newOwner[h] = name[h];

	newDog->name = newName;
	newDog->age = age;
	newDog->owner = newOwner;

	return (newDog);
}
