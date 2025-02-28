#include "main.h"

/**
 * *_strncpy - Entry point
 *
 * Description :copies a string from an array
 *@dest: destination array
 *@src : source array.
 
 * Return: dest.
 */


char *_strncpy(char *dest, char *src, int n)
{
        int i = 0;

        while (src[i] != '\0')
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

