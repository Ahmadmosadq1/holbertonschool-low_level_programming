#include "main.h"


/**
 * puts_half - Entry point
 *
 * Description :prints half of a string.
 *.
 *@s : parameter.
 
 * Return: void.
 */


int _atoi(char *s)
{
	int b = 0;i
	unsigned int ni = 0;
	int min = 1;
	int init = 0;
       	while (s[b])
	{
		if (s[b] == 45)
		{
			min *= -1;
		}
		while (s[b] >= 48 && s[b] <= 57)
		{
			init = 1;
			ni = (ni * 10) + (s[b] - '0');
			b++;
		}
		if (init == 1)
		{
		       	break;
		}
		b++;
	}
	return (ni * min);
}

