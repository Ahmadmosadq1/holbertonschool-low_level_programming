#include <stdio.h>
#include  <stdlib.h>

int _sqrt_helper(int n, int y);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root, or -1 if no natural root exists.
 */


int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Recursively finds the natural square root.
 * @n: The number to find the square root of.
 * @y: The current test number.
 *
 * Return: The square root, or -1 if no natural root exists.
 */
int _sqrt_helper(int n, int y)
{
	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);
	return (_sqrt_helper(n, y + 1));
}
