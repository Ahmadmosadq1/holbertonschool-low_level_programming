#include "main.h"

/**
 * *_strncpy - Entry point
 *
 * Description :copies a string from an array
 *
 *@dest: destination array
 *@src : source array.
 *@n: number of appenong array elements
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

