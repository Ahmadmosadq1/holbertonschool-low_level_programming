#include "main.h"

/**
 * _strlen_recursion- Entry point
 *
 * Description: This function prints the length of the string.
 *
 * @s : the pointer.
 *
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
