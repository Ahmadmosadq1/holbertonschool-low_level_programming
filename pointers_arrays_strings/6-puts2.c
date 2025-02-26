#include "main.h"

/**
 * puts2 - Entry point
 *
 * Description :function prints every 2 steps starting from
 * index 0
 *
 * @str: the string
 *
 * Return: void.
 */


void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
