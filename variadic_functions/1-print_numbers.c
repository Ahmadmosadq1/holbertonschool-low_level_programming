#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers- Entry point
 *
 * Description: varadic function for sum.
 * @separator: pointer for checking string.
 * @n: the number of intger numbers to sum.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (n != 0)
{
	(va_start(arg, n));
	printf("%d", va_arg(arg, int));
	for (i = 0; i < n - 1; i++)
	{
		if (separator)
			printf("%s", separator);
		printf("%d", va_arg(arg, int));
	}
	printf("\n");
	va_end(arg);
}
}
