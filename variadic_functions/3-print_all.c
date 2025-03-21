#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This function prints a string using puts.
 * Return: Always 0 (Success)
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list arg;
	int *str;

	va_start(arg, format);
	
	while (va_arg(arg, fromat) != NULL)
	{
		str = va_arg(arg, format);
		if (isdigit(str))
			
		if(!isdigit(str))
			continue;

