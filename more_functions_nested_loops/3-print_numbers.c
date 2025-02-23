#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description :prints number from 0 to 9 using _putchar
 *.
 * Return: void.
 */
ivoid print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar(num + '0');
	_putchar('\n');
}
