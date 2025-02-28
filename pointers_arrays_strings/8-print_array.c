#include "main.h"
#include <stdio.h>

/**
 * print_array- Entry point
 *
 * Description :prints the elemnts of the array.
 *.
 *@a : the array
 *@n : the number of the array
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
		if (i == n - 1)
			printf("%d", a[i]);
	}
	printf("\n");
}
