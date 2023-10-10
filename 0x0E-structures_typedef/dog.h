#ifndef LITTLE_DOG_H
#define LITTLE_DOG_H
#include <stdio.h>
/**
 * struct dog - a new structure dog
 *
 * @name: is the dog name
 *
 * @age: is the dog age.
 *
 * @owner: is the dog's owner.
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
