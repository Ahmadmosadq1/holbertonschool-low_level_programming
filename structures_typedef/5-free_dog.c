#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 *
 * Description: freeing dynamically allocated memeoiry.
 * @d: pointer.
 * Return: Always 0 (Success)
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
