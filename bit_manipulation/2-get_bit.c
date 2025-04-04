#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description :prints number from 0 to 9 using _putchar
 *.
 * Return: void.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	for (bit = 63; (int) bit >= 0; bit--)
	{
		if ((n >> bit) & 1)
			break;
	}
	for (; bit > index; bit--)
	{
		if (bit == index)
			break;
	}
	return((n >> bit) & 1);
}	

