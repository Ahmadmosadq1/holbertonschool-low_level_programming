#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point
 *
 * Description: calculate the length of a string.
 *
 * @s: the parameters
 *.
 * Return: void.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
return (i);
}
