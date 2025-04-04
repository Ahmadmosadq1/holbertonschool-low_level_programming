#include "main.h"

/**
 * get_bit- Entry point
 *
 * Description :prints any bit of a binary number
 *
 * @n: the unsigned ineger number
 * @index: the bit to printed
 * Return: index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n >> index) & 1);
}

