#include "main.h"

/**
 * print_line - Entry point
 *
 * Description :prints lines (-) for n times.
 *
 * @n : parameters
 *.
 * Return: void.
 */

void print_line(int n)
{
	int num;

	for (num = 0 ; num < n; num++)
	{
		if (n <= 0)
		{
		_putchar('\n');
		break;
		}
		else
		_putchar('-');
	}
	_putchar('\n');
}


