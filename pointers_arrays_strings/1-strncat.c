#include "main.h"

/**
 * *_strncat - Entry point
 *
 * Description : taks two strings and put them together
 *@dest: destination array.
 *@src : source array
 *@n : number of elements to be appened to dest array
 * Return: void.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
