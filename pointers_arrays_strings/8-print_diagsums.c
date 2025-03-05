#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 *
 * Description :prints the diagonals of a squarw array.
 *@a : the array.
 *@size : the size of the array.
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + i * size + i);/*prints the first diagonal*/
		sum2 = sum2 + *(a + i * size + (size - 1 - i));/*second diagonal*/
	}
	printf("%d, %d \n", sum1, sum2);
}
