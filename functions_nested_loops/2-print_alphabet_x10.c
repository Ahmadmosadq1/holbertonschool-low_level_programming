#include "main.h"
/**
*print_alphabet_x10 - Entery point.
*
*Description: t prints the all aplphabets 10 times follwed by new line
*Return: no need as it is a void function
*/

void print_alphabet_x10(void)
{
	char alpha;
	int counter = 0;

	while (counter < 10)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	if (alpha == 'z')
	{
	_putchar('\n');
	continue;
	}
	else
	{
	continue;
	}
	}
	counter++;
	}
}

