#include "main.h"

/**
 * *_memset - Entry point
 *
 * Description :a function that fills specific char with n bytes
 * pointed by s pointer
 *.
 *@s : the popinter.
 *@b:the charachter to be printed
 *@n : number of memory spaces to be filled with b.
 * Return: void.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
