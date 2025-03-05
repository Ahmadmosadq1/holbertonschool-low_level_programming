#include "main.h"


/**
 * _print_rev_recursion - Entry point
 *
 * Description: This function prints the string in reverse.
 *
 * @s : the pointer.
 *
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
