#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: This function prints a string using puts.
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (height == 0 && width == 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int*));
	if (width == 0 && height == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	
	for (i = 0; i < height; i++)
{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
		while (i-- >= 0)
			free(arr[i]);
		return (NULL);
		}
}

	return (arr);
}
