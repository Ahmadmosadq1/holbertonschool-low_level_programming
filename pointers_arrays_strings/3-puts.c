#include "main.h"

/**
 * _puts - Entry point
 *
 * Description :printinga string from an array
 *
 * @str: parameter
 *.
 * Return: void.
 */

void _puts(char *str)
{
	while (*str)         /*
			      * while str is not null,
			      * print the string array
			     */
	{
		_putchar(*str);
		++str;
	}
_putchar('\n');
}
