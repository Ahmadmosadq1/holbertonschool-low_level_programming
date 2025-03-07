#include "main.h"

/**
 * _sqrt_recursion - Entry point.
 *
 * @n : the number to find its square root
 *
 * Description: This function prints a string using puts.
 * Return: Always 0 (Success)
 */

/* making a function helper*/

int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
		return (-1);

	return (_sqrt_helper(y, n));
}
