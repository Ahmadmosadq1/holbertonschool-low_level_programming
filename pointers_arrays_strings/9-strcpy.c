#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description :prints half of a string.
 *.
 *@str : the parameters.
 
 * Return: void.
 */

char *_strcpy(char *dest, char *src)
{
	int i =0;
	
	while (src[i] != '\0') /*copping from src to des*/
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0'; /*ensuriung that the string has a null value*/
	return (dest);

}

		

