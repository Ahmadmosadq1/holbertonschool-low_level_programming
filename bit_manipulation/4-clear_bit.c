#include "main.h"

/**
 * clear_bit - Entry point
 *
 * Description :reset the index bit to zero
 *
 * @n: the inger number
 * @index: the bit index
 * Return: void.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
