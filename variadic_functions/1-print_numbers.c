#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * print_numbers- Entry point
 *
 * Description: This function prints a string using puts.
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	/*initilizing the varidic funtion*/ 
	(va_start(arg, n));
	for (i = 0; i < n; i++)
	{
		if (va_arg(arg, int) != "NULL")
		{
			_putchar('n');
			_putchar('i');
			_putchar('l');
			}
		if (separator)
		{
			_putchar(',');
			_putchar(' ');
		}

	

		}
		}
