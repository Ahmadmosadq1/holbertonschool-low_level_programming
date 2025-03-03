#include "main.h"
#include <stddef.h>

/**
 *_strchr- Entry point
 *
 * Description :searches for a charachter ina string using a pointer.
 *.
 *@s : the pointer.
 *@c : the charachter to be searched for
 *
 * Return: s.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' )
	{
		if (*s == c)
		{
			break;
		}
		else if (*s == '\0')
		{
			return (s);
			return (NULL);
		}
	s++;
	}
	return (s);
}

