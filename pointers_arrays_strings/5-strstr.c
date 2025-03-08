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
	char *hay_coun;
	char *need_count;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		hay_coun = haystack;
		need_count = needle;
		while (*hay_coun != '\0' && *need_count != '\0' && *hay_coun == *need_count)
		{
			hay_coun++;
			need_count++;
		}
		if (*need_count == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}


