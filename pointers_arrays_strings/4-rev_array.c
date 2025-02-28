#include "main.h"

/**
 * reverse_array - Entry point
 *
 * Description :reverses the integer array.
 *@a: the array.
 *@n : number of elements
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int j, temp;

	for (j = 0; j < n / 2; j++)
	{
		temp = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = temp;
	}
}


