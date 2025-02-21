#include "main.h"

/**
* print_last_digit - Entry point
*
* Description: 'the program's description'
* @num: describe the parameter
*
* Return: Always 0 (Success)
*/
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (last_digit < 0)
	{
	last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
