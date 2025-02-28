#include "main.h"
#include <stdio.h>

/**
 * puts_half - Entry point
 *
 * Description :prints half of a string.
 *.
 *@str : the parameters.

 * Return: void.
 */

void print_array(int *a, int n)
{
	int i = 0;
	while ( i < n-1)
	{
		printf("%d, ", a[i]);
		i++;
		if (i == n-1)
			printf("%d",a[i]);

	}
	printf("\n");
}
