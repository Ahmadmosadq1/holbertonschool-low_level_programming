#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description :prints a reverse of a string
 *
 * @s: the string
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int i = 0;/*
		 * to initilize the pointer
		 */
	/*
	 * we first move the pointer to the last index
	 */
	while (s[i] != '\0')
	{
		s++;
	}
	/*
	 * now that we moved the pointer to (s-1)
	 * we shall itarate backwards and printing
	 * along the way
	 */

	for (s = s - 1; s[i] > 0; s--)
	{
		_putchar(*s);

	}
	/*
	 * the (*s) is the value of the current index
	 * the pointer points to
	 */
	_putchar('\n');
}




