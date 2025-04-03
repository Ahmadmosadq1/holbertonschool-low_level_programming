#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Entry point
 *
 * Description :converts binary in string to unsigned int.
 *
 * @b: the binary string
 *.
 * Return: sum.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		sum = sum * 2 + (*b - '0');
		b++;
	}
	return (sum);
}




