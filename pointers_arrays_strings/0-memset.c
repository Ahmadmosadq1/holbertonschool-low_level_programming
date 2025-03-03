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
	int i = 0;
	char used_string;
	char the_remaining;

	while (s[i] != '\0')
	{
		i++;
	}
	/*calculating the length*/

	used_string = i + 1; /*including the first string with the null value*/
	the_remaining = n - used_string; /* excluding the used*/
	while (the_remaining--)
	{
		*s = (unsigned char)b;
	}
	return (s);
}



