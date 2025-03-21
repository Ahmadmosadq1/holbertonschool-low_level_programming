#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 *
 * Description: This function conaecates two strings
 * @s1 : first string.
 * @s2 : second string.
 * @n : the size of the needed s2.
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int count1;
	unsigned int count2;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	/*allocating heap memory for the both sizes + '\0'*/
	arr = malloc((i + n + 1) * sizeof(char));
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


