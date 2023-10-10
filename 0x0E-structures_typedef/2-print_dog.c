#include "dog.h"
/**
 * print_dog - to print dog details.
 *
 * @d: the dog wanted its details.
 *
 * Return: void function
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age ? d->age : 0);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
