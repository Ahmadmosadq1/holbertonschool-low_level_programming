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
	int i = 0;
	int j;
	/*
	 * calculating the string length null not included.
	 */
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i ; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
