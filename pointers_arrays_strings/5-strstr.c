#include "main.h"
#include <stdio.h>

/**
 * *_strstr - Entry point
 *
 * Description: retruns to the current pointer for needle in first match
 * with the haystack string.
 *
 * @haystack : the string.
 * @needle : the sub string.
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystack_save = haystack;

	while (*needle != '\0')
	{
		while (*haystack != '\0')
		{
			if (*needle == *haystack)
				return (needle);
			haystack++;
		}
		haystack = haystack_save;
		needle++;
	}
	return (NULL);
}


