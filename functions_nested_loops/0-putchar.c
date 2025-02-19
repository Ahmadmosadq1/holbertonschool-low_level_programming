#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this script will call a userdefined function
 * ftom thr header file (main.h)
 * the called function is _putchar().
 * Return: Always 0 (Success)
 */

int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
	_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}


