#include "main.h"

/**
 * *_memcpy- Entry point
 *
 * Description :copies n bytes from src to dest.
 *.
 *@src : source array.
 *@dest : destination array.
 *@n : number of bytes.
 * Return: to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);

}
