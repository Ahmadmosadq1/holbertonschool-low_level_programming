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
	_putchar((num / 10) * '1');
	/*
	 * form 0 to 9 when divided by 10
	 * it will equql to '0' which is
	 * a null value.
	 *it will print 1 form 10 to 11
	 */
	_putchar((num % 10) + '0');
	/*
	 * this will handle the
	 * second digigt.
	 */
	}
	_putchar('\n');
	}

}
