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
	
	if (str == NULL)
		return NULL;

	/* finding the string length*/
	while (str[i])
	{
		j++;
		i++;
	}
	/* returing the pointer to space AKA heap*/

	arr = malloc((j + 1) * sizeof(char));
	for (i = 0; i < j; i++)
		arr[i] = str[i];
	arr[i] = '\0';
	if (j == 0)
		return (NULL);
return (arr);
}


