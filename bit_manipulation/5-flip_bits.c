#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description :prints number from 0 to 9 using _putchar
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
