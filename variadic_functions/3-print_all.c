#include "variadic_functions.h"
#include <stdarg.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_all- Entry pointt
 *
 * Description: This function prints any data type.
 * @format: data fromat.
 * Return: Always 0 (Success)
 */


void print_all(const char * const format, ...)
{
	int i = 0;
	int j;
	va_list arg;
	char selector[4] = {'c', 'i', 'f', 's'};
	int printed = 0;

void (*func_selector[4])(va_list) = {
	print_char,
	print_int,
	print_float,
	print_string,
};
va_start(arg, format);
while (format && format[i])
{
	j = 0;
	while (j < 4)
	{
		if (format[i] == selector[j])
		{
			printed ? printf(", ") : 0;
			func_selector[j](arg);
			printed = 1;
			j = 4;
		}
		++j;
	}
	i++;
}

printf("\n");
va_end(arg);
}
/**
 * print_char- Entry pointt
 *
 * Description: This function prints char argument dataa types
 * @arg: data fromat.
 * Return: void
 */
void print_char(va_list arg)
	{
		printf("%c", va_arg(arg, int));
	}
/**
 * print_int- Entry pointt
 *
 * Description: This function prints int argument data types
 * @arg: data fromat.
 * Return: void
 */
void print_int(va_list arg)
	{
		printf("%d", va_arg(arg, int));
	}

/**
 * print_float- Entry pointt
 *
 * Description: This function prints float argument data types
 * @arg: data fromat.
 * Return: void
 */
void print_float(va_list arg)
	{
		printf("%f", va_arg(arg, double));
	}

/**
 * print_string- Entry pointt
 *
 * Description: This function prints string argument data types
 * @arg: data fromat.
 * Return: void
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	printf("%s", str ? str : "(nil)");

}
