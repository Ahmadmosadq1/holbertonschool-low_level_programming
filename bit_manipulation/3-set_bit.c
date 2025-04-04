#include "main.h"

/**
 * set_bit - Entry point
 *
 * Description :sets any bit index to one
 * @n :the integer number
 *@index: the bit index
 * Return: 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}
