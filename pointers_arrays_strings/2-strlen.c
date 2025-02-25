#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point
 *
 * Description: calculate the length of a string.
 *
 * @s
 *.
 * Return: void.
 */

int _strlen(char *s)
{
	int i;
	for (i=1; ; i++)/* 
			 * increment looping with condition inside
			 * ++s is moving the pointer in the array in each loop
			 *
			 * the loop will terminate if the pointer reached
			 * to the last defualt value (null = "/0")
			 */
	{
	++s;

	if (*s == '\0')
	{
		break;
	}
}
return (i);
}
