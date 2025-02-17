#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing number from 0-9 sperated by space and comma.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
	putchar(num + '0');
	if (num < 9)
	{
	putchar(',');
	putchar(' ');
	continue;
	}
	else if (num == 9)
	{
	continue;
	}
	}
	putchar('\n');
	return (0);
}
