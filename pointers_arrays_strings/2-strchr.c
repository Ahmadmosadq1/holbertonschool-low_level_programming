#include "main.h"

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
	while (s++)
	{
		if (*s == c)
		break;
	}
	return (s);
}
