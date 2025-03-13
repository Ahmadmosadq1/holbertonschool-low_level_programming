#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Description: This function prints a string using puts.
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;
	char *

	*arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)

