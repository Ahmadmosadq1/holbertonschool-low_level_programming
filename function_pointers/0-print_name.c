#include "main.h"

/**
 * print_name - Entry point
 *
 * Description: a funtion that has a function pointer in its arguments
 * to call back other functions.
 * @name: the name to be printed.
 * @f : function pointer.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
