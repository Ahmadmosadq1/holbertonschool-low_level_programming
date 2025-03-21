#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Entry point
 *
 * Description: priniting strings using varadic funtion.
 * @n: number of strings.
 * @separator: seperates the strings with any charachter
 * Return: Always 0 (Success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char*);
		if (str == NULL)
			printf("%s", "(nil)");
		else
			rintf("%s", str);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}

printf("\n");
va_end(arg);
}
