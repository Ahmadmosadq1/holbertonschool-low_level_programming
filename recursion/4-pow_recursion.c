#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * Description: This function takes the power y of x..
 *
 * @x :  the base number.
 *
 * @y : the power number.
 *
 * Return: return the result of the function
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
