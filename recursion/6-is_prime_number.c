#include <stdio.h>
#include  <stdlib.h>

int prime_helper(int n, int y, int count);
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_helper(n, 2, 0));
}

/**
 * prime_helper - Recursively counts divisors to check for prime status.
 * @n: The number to check.
 * @y: The current divisor being tested.
 * @count: The number of divisors found.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int prime_helper(int n, int y, int count)
{
	if (n % y == 0)
		count++;
	if (y >  n)
	{
		if (count == 2)
			return (1);
		else
			return (0);
	}
	if (n % y == 0)
		count++;
	return (prime_helper(n, y + 1, count));
}


