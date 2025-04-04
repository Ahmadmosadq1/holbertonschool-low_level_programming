#include "main.h"

/**
 * flip_bits - Entry point
 *
 * Description :compare n and m bit by bit using XOR
 *
 * @n: num#1
 * @m: num#2
 *.
 * Return: void.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int count = 0;
	unsigned long int i;

	for (i = 0; i <= 63; i++)
	{
		if (((m >> i) & 1) ^ ((n >> i) & 1))
			count++;
	}
	return (count);
}
