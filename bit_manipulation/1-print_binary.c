#include "main.h"
#include <stdio.h>

/**
 * print_binary - Entry point
 *
 * Description :converts decimal to binary using bitwise ops
 *@n: the integer number
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	int bit;

	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}
	for (bit = 63; bit >= 0; bit--)
		if ((n >> bit) & 1)
			break;
	for (; bit >= 0; bit--)
		_putchar(((n >> bit) & 1) + '0');
}
