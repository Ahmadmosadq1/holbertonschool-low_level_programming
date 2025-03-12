#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - Entry point
 *
 * Description: This function retunrs the pointer to integer
 *
 * @b : the byte size.
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}
