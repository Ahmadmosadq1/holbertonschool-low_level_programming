#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Enrty point
 *
 * Description:printing the members of th data structure
 * @d: the ponter to struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("%s\n", (d->name) ? d->name : "nil");
		printf("%f\n", d->age);
		printf("%s\n", (d->owner) ? d->owner : "nil");
	}
}
