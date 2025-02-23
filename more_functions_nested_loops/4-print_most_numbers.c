#include "main.h"

/**
 * print_most_numbers - printing numbers (0-9) without(2,4)
 *
 * @void:
 *
 * Return:void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		else
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}
