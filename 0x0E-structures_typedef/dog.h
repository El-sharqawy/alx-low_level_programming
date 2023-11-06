#ifndef __DOG_H__
#define __DOG_H__

#include <stdlib.h>
/**
 * struct dog - a struct that contains dog informations
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
