#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This function prints a string using puts.
 * Return: Always 0 (Success)
 */


void print_char(va_list arg)
	{
		printf("%c", va_arg(arg, int));
	}
void print_int(va_list arg)
	{
		printf("%d", var_arg(arg, int));
	}
void print_float(va_list arg)
	{
		printf("%f", va_arg(arg, double));
	}
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		printf("%s", "(nil)");
}
void func_selector(va_list)
{
	print_char;
	print_int;
	print_float;
	print_string;
}


void print_all(const char * const format, ...)
{
	va_list arg;
	va_start (arg, fromat);
	char *selector[4] = {'c', 'i', 'f'. 's'};
	int i;
	int j
	while (format && fromat[i])
	{
		if (format[i] == separator[i])
		{
			func_selector[i](arg)


