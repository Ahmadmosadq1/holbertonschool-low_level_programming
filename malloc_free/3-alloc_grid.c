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

	if(arr == NULL)
	       return (NULL);	
	
	/*if (height == 0 && width == 0)
	{
		return (NULL);
	}*/
	arr = malloc(height * sizeof(int*));
	for (i = 0; i < height; i++)
		arr[i] = malloc(width * sizeof(int));

	return (arr);
}
