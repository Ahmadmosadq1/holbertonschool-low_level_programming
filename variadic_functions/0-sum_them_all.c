#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Entry point
 *
 * Description: summing nums in a non fixed arguemtns
 * @n: number of arguments
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int;
	int sum = 0;
	int i;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i == 0; i < n; i++)
		sum = +va_arg(arg, int);
	va_end(arg);
	return (sum);
}
