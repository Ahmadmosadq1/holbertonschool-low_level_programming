#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This function prints a string using puts.
 * Return: Always 0 (Success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			printf("%s", va_arg(

}
