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
	 * we will first do the loop
	 * from both sides , the first
	 * and last pointer.
	 */
	int i = 0;
	int j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i / 2 ; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
}
