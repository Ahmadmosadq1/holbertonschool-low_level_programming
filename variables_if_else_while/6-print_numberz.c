#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This script prints digits from 0-9 using only putchar.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
	putchar(n + '0');
	n++;
	}
	putchar('\n');
	return (0);
}

