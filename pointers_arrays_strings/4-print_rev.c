#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description :prints the string in reverse.
 *
 * @s : the strig.
 *.
 * Return: void.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		s++;
	}

	/*
	 * we moved the pointer to last
	 * index using while loop
	 * we can check if by "_putchar(*(s -1));"
	 */
	for (s = s - 1; s[i] > 0; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
