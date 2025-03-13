#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: This function prints a string using puts.
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int count1;
	unsigned int count2;
	char *arr;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	/*allocating heap memory for the both sizes + '\0'*/
	arr = malloc((i + n + 1) * sizeof(char));
	
	if (s1[0] == '\0' || s2[0] == '\0')
		return ("");	
	if (arr == NULL)
		return (NULL);
	/*doing the conocating string s1*/
	for (count1 = 0; count1 < i; count1++)
		arr[count1] = s1[count1];
	/*s2*/
	if (n > j)
	{
		for (count2 = 0; count2 < j; count2++)
			arr[count1 + count2] = s2[count2];
	}
	else
	{
		for (count2 = 0; count2 < n; count2++)
			arr[count1 + count2] = s2[count2];
	}
	arr[count1 + count2] = '\0';
	return (arr);
}


