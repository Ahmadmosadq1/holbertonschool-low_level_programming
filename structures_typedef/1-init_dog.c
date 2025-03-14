#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Entry point
 *
 * Description: a function that has a data structer of dog's data.
 * @d: is the pointer to strutctre.
 * @name: dog's name.
 * @age : dog's age.
 * @owner: dog's owner's name.
 * Return: void
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
