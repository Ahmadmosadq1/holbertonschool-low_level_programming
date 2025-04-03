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
	while (n)
	{
		_putchar((n & 1) + '0');
		n = n >> 1;
	}
}
