#include "main.h"

/**
 * _strspn - Entry point
 *
 * Description :checked if each index from s is equal to any index of accept.
 * if not fount, stop
 *.
 *@s :  the original string
 *@accept : the string to match with.
 * Return: void.
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int checker = 0;/*to compare it with counter*/
	char *ptr_accept = accept; /* saving the original pointer with its position.*/

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			count = count + 1;
			accept++;
		}
		checker = checker + 1;
		if (count != checker)
			return (count);
		accept = ptr_accept;
		s++;
	}
	return (count);
}




