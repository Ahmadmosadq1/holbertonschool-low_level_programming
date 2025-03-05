#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * Description: using recursion to print a string
 *
 * @s : the pointer.
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}


