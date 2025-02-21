#include "main.h"
/**
*times_table - Entry point
*Description: 'the program's description'
*@void: describe the parameter
*Return: Always 0 (Success)
*/

void times_table(void)
{
	int x_tab;
	int mult;
	int result;

	for (x_tab = 0; x_tab < 10 ; x_tab++)
	{
	for (mult = 0; mult < 10; mult++)
	{
	result = mult * x_tab;
	_putchar ((result / 10) + '0');
	_putchar ((result % 10) + '0');
	_putchar(',');
	_putchar(' ');
	if (mult == 9)
	_putchar('\n');
	continue;
	if (x_tab > 11)
	break;
	}
	}
}

