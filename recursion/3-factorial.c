#include "main.h"

/**
 * factorial - Entry point
 *
 * @n : the number to e factoriled
 *
 * Description: This function prints a string using puts.
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
