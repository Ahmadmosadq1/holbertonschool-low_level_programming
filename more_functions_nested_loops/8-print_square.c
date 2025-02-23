#include "main.h"

/**
 * print_square - Entry point
 *
 * Description :printing squares using '#'
 *.
 * @size : the dimentions of the square
 * Return: void.
 */

void print_square(int size)
{
	int height;
	int base;

	for (height = 0; height < size; height++)
	{
		if ( size <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
		for (base = 0; base < size; base++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}

