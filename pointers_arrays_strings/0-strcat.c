#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description :prints half of a string.
 *.
 *@str : the parameters.
 
 * Return: void.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

dest[i] = '\0';
return (dest);
}


