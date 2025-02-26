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
	/*
	 * we first find the length
	 * we can use our function _strlen()
	 * we will first do the loop
	 * from both sides , the first
	 * and last pointer.
	 */
	int i = _strlen(s);
	int j = 0;
	char temp;

	for (j = 0; j < i / 2 ; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
}
