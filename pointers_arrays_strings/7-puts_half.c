#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description :prints number from 0 to 9 using _putchar
 *.
 * Return: void.
 */

void puts_half(char *str)
{
	int i =0;
	int j;
	
	/*calculating the length*/
	while (str[i] != 0)
	{
		i++;
	}

	/*printing half the string*/

	for (j = i / 2; j < i; j++)
	{
		_putchar(str[j]);
	}
_putchar('\n');
}
