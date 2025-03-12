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
	int j;

	arr = malloc(width * sizeof(int*));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i] = malloc(0 * sizeof(int));
		}
	}
	return (arr);
}
