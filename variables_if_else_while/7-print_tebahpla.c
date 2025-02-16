#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This script prints digits from 0-9 using only putchar.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
	putchar(n);
	n--;
	}
	putchar('\n');
	return (0);
}
