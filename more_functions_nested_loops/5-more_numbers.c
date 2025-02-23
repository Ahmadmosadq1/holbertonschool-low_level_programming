#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description :pthis program prints 10 lines of numbers (0-9).
 *.
 * Return: void.
 */

void more_numbers(void)
{
	int num;
	int line;

	for (line = 0; line < 10; line++)
	{
	for (num = 0; num < 15; num++)
	{
		if (num > 9)
		{
		_putchar((num / 10) + '0');

		/*
		 * only if num > 9,
		 * do the above condition.
		 */
		}
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
	}
}

