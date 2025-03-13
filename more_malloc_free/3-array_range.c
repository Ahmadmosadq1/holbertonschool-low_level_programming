#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Entry point
 *
 * Description: This function prints range array
 * @max : highest value.
 * @min : lowset value.
 * Return: arr.
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min  + 1) * sizeof(int));
		if (arr == NULL)
			return (NULL);
		for (i = 0; min <= max; i++, min++)
			arr[i] = min;
		return (arr);
}

