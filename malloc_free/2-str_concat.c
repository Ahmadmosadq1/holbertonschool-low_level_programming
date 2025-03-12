#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 *
 * Description: This function connects two strings in dynamic memory.
 * @s1 : the first string.
 * @s2 : the second string.
 * Return: arr variable
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int count1;
	int count2;
	char *arr;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		++j;
	arr = malloc((i + j + 1) * sizeof(char));
	for (count1 = 0; count1 < i; count1++)
	{
		arr[count1] = s1[count1];
	}
	for (count2 = 0; count2 < j; count2++)
	{
		arr[count2 + count1] = s2[count2];
	}
	arr[count1 + count2] = '\0';
	return (arr);
}
