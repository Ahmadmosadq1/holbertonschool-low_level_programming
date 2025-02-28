#include "main.h"

/**
 * *string_toupper - Entry point
 *
 * Description :covert lowercase string to uppercase
 *.
 *@str : the dtrinh.
 * Return: void.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
