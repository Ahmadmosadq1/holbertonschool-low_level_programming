#include "main.h"

/**
 * _strcmp - Entry point
 *
 * Description :compares two strings..
 *@s1: the 1st string.
 *@s2: the 2nd string.
 * Return: void.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

