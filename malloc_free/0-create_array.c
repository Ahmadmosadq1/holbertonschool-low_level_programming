#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- Entry point
 *
 * Description: creating an array with dynamic memory allocation.
 * @size : the array size.
 * @c: the charachter
 * Return: arr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr =  malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
