#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description :prints half of a string.
 *.
 *@str : the parameters.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != 0)
	{
		i++;
	}
	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
		j = j + 1;
	}
	else if (i % 2 == 0)
		j = i / 2;


	/*printing half the string*/

	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
_putchar('\n');
}

