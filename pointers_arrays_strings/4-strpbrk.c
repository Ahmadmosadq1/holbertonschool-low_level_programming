#include "main.h"

#include<stdio.h>
/**
 * *_strpbrk - Entry point
 *
 * Description: return rhe pointer to s in the first matching occurance.
 *
 * @s : the main string.
 * @accept : the sring to be compared with.
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr_save = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}

			accept = ptr_save;
			s++;
	}
	return (NULL);
}

