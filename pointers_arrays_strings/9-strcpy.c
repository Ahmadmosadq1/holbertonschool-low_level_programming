#include "main.h"

/**
 * _strcpy - Entry point
 *
 * Description :copies the elements of one array tp another array
 *.
 *@src : the source array.
 *@dest : the destination array
 *
 * Return: void.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0') /*copping from src to des*/
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0'; /*ensuriung that the string has a null value*/
	return (dest);

}
