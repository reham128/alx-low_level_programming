#include "dog.h"
/**
 * init_dog - initializing variable of type struct dog
 *
 * @name: is the Dog Name.
 *
 * @age: is the Dog Age.
 *
 * @owner: the name of the Dog Owner
 *
 * Return: void function.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
