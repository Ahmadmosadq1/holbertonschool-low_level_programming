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
	int j ;
	
	/*calculating the length*/
	while (str[i] != 0)
	{
		i++;
	}
	if (i % 2 == 1)
		j = (i-1)/2;
	else if ( i % 2 == 0)
		j = i/2;


	/*printing half the string*/

	for (j = i / 2; j < i; j++)
	{
		_putchar(str[j]);
	}
_putchar('\n');
}

