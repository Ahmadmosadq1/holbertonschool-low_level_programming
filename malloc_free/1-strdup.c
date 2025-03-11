#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *
 * Description: copies a string to a heap memeory.
 * @str : the input string.
 *
 * Return: arr.
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *arr;

	/* finding the string length*/
	while (str[i])
	{
		j++;
	/* returing the pointer to space AKA heap*/

	arr = malloc((j + 1) * sizeof(char));
	if (str == NULL)
                return ('\0');
	for (i = 0; i < j; i++)
		arr[i] = str[i];
	arr[i] = '\0';
}
return (arr);
}


