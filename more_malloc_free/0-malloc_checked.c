#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * main - Entry point
 *
 * Description: This function prints a string using puts.
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
