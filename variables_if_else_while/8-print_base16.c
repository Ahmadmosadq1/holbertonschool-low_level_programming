#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using putchar to print hexadeciaml numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hexi = 'a';
	int n = 0;

	while (n <= 9)
	{
	putchar (n + '0');
	n++;
	if (n > 9)
	{
	while (hexi <= 'f')
	{
	putchar(hexi);
	++hexi;
	}
	}
	else
	{
	continue;
	}
	}
	putchar('\n');
	return (0);
}

