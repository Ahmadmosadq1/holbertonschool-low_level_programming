#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: swaps the values between two int variables
 *.
 *@a: parameter
 *@b: parameter
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int temp;

	/**
	 * we have to have a temperary varible
	 * to assign for one of them.
	 * beacuse if didnt, one of them
	 * will be updated and lost
	 */
	temp = *a;
	*a = *b;
	*b = temp;
}
